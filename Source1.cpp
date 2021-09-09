public bool Remove(T value)
{
	BinaryTreeNode current, parent;
	current = FindWithParent(value, out parent);

	if (current == null)
	{
		return false;
	}

	_count--;

	if (current.Right == null)
	{
		if (parent == null)
		{
			_head = current.Left;
		}
		else
		{
			int result = parent.CompareTo(current.Value);
			if (result > 0)
			{
				parent.Left = current.Left;
			}
			else if (result < 0) {
				parent.Right = current.Left;
			}
		}
	}
	else if (current.Right.Left == null) {
		current.Right.Left = current.Left;
		if (parent == null) {
			_head = current.Right;
		}
		else {
			int result = parent.CompareTo(current.Value);
			if (result > 0)
			{
				parent.Left = current.Right;
			}
			else if (result < 0) {
				parent.Right = current.Right;
			}
		}
	}
	else {
		BinaryTreeNode leftmost = current.Right.Left;
		BinaryTreeNode leftmostParent = current.Right;
		while (leftmost.Left != null) {
			leftmostParent = leftmost; leftmost = leftmost.Left;
		}
		leftmostParent.Left = leftmost.Right;
		Left = current.Left;
		leftmost.Right = current.Right;
		if (parent == null) {
			_head = leftmost;
		}
		else {
			int result = parent.CompareTo(current.Value);
			if (result > 0)
			{
				parent.Left = leftmost;
			}
			else if (result < 0)
			{
				parent.Right = leftmost;
			}
		}
	}

	return true;
}