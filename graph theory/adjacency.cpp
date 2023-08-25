#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class graph
{
public: 
vector<vector<int>> adj;
    void addedge(int u, int v )
    {
        // direction ->0 undirected
        // direction ->1 directed

        // create an edge from u to v
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printadjlist()
    {
      for (int i = 0; i <adj.size(); i++)
      {
         cout<<i<<" -> ";
         for (int j = 0; j< adj[i].size(); j++)
         {
            cout<<adj[i][j]<<" ,";
         }
         
      }
       
    }
};
int main()
{
    int n;
    cout << "enter the number of nodes" << endl;
    cin >> n;
    cout << "enter the number of edges" << endl;
    int m;
    cin >> m;
    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.addedge(u, v);
    }

    // printing graph
    g.printadjlist();

    return 0;
}