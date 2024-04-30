#include <stdio.h>
#include <stdbool.h>

#define N 1005

int adj[N][N];
bool visited[N];

void dfs(int u, int n)
{
    visited[u] = true;
    printf("%d ", u);

    for (int v = 1; v <= n; v++)
    {
        if (adj[u][v] && !visited[v])
        {
            dfs(v, n);
        }
    }
}

int main()
{
   freopen ("dfsinput.txt", "r", stdin);
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    dfs(0, n);
    return 0;
}
