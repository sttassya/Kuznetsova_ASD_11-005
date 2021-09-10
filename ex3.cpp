#include <iostream>
#include <vector>

using namespace std;

vector<bool> was; 
vector<vector<int> > graph; 

void dfs(int v) {
    if (was[v]) { 
        return;
    }
    was[v] = 1; 
    for (auto i : graph[v]) {
        dfs(i); 
    }
}

int main() {
    int n, m;
    cin >> n >> m; 
    graph.resize(n);
    was.resize(n);
    for (int i = 0; i < n; i++) {
        was[i] = 0; 
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b); 
    }
    dfs(0);
    return 0;
}