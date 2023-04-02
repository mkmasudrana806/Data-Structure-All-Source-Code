// DFS in C++
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10];
int visited[10];

// Add edge
void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void dfs(int nod, int des)
{
    if (visited[nod])
        {
            return;
        }
        if(visited[des])
              exit(1);
    visited[nod] = 1;
    cout << char(nod+65) << "\t"; // 1, 5,

    for (int i = 0; i < adj[nod].size(); i++)
    {
        dfs(adj[nod][i]);
    }
}

int main()
{
    int V, E;
    char a, b;
    scanf("%d %d", &V, &E);

    for (int i = 0; i < E; i++)
    {
        scanf("%d %d", &a, &b);
        addEdge(adj, a, b);
    }

    cout << "Printing graph using DFS:" << endl;
    dfs(1, 4);
}

/**
0 1
1 3
1 2
3 2
3 4
4 2
2 5
1 5
1 6
4 6
*/
