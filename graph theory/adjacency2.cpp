#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void dfs(int node,vector<int> adj[],int vis[],vector<int> &ls)
{
    vis[node]=1;
    ls.push_back(node);
    for (auto it: adj[node])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis,ls);
        }
    }
     
    }
 vector<int> dfsofgraph(int v,vector<int> adj[])
 {
    int vis[v]={0};
    int start=0;
    vector<int> ls;
    dfs(start,adj,vis,ls);
 }

  
// this is the code of the bfs;
vector<int> bfsofgraph(int v, vector<int> adj[])
{
    int vis[v] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}
 


int main()
{
    int n, m;
    cin >> n >> m;
    // graph here
    // int adj[n+1][m+1];
    // for (int i = 0; i <m; i++)
    // {
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }//space complexity is n*n;
    // for weigted graph we will put the weight at the place of 1;

    // using the list
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> A = bfsofgraph(n, adj);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}