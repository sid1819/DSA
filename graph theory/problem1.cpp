// Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.

// Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.

// Example 1:

// Input:
// grid = {{0,1},{1,0},{1,1},{1,0}}
// Output:
// 1
// Explanation:
// The grid is-
// 0 1
// 1 0
// 1 1
// 1 0
// // All lands are connected

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 void bfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            
             //this is the allaround traversal of a point in matrices
            for(int delrow=-1;delrow<=1;delrow++)
            {
                for(int delcol=-1;delcol<=1;delcol++)
                {
                    int nrow=row+delrow;
                    int ncol=col+delcol;
                    if(nrow >=0 && nrow<n && ncol>=0 && ncol<m  && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
                    {
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                        
                        
                    }
                }
            }
        }
        
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>  vis(n,vector<int>(m,0));
        int cnt=0;
        for(int row=0;row<n;row++)
        {
            for(int col=0; col<m;col++)
            {
                if(!vis[row][col] && grid[row][col]=='1')
                {
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
int main()
{
ll t;
cin>>t;
while(t--)
{
 
}
return 0;
}