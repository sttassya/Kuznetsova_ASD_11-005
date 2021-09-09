#include <iostream> 
#include <math.h>
struct coord {
    float x, y;
};
void main() {
    setlocale(0, "rus");
    const int quantity = 3;
    coord point[quantity], point1, point2;;
    int i, j;
    float distance, mindistance = std::numeric_limits<float>::max();
    for (i = 0; i < quantity; i++)
        std::cin >> point[i].x >> point[i].y;
    for (i = 0; i < quantity - 1; i++)
        for (j = i + 1; j < quantity; j++)
        {
            distance = pow((point[i].x - point[j].x), 2) + pow((point[i].y - point[j].y), 2);
            if (distance < mindistance)
            {
                point1 = point[i];
                point2 = point[j];
                mindistance = distance;
            }
        }
    std::cout << "���������� ������� �������� (" << point1.x << ":" << point1.y << ") � (" << point2.x << ":" << point2.y << ")";
}