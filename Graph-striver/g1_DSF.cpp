#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
vector<int> visited(100005);

void dsf(int node)
{
    visited[node] = 1;
    cout << node << " ";
    vector<int>::iterator i;

    //  for (i = adj[node].begin(); i != adj[node].end(); ++i)
    //     if (!visited[*i])
    //         dsf(*i);

    for (auto &&it : adj[node])
    {
        if (!visited[it])
            dsf(it);
    }
}

void dsfsolve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dsf(i);
        }
    }

    // dsf(1);
}

void bfs(int node)
{
    visited[node] = 1;
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for (auto &&it : adj[node])
        {
            if (!visited[it]){

                visited[it] = 1;
                q.push(it);
            }
        }
    }
}

void bfssolve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            bfs(i);
        }
    }
}

int main()
{

    // cin>>n;
    // dsfsolve();
    bfssolve();
    return 0;
}