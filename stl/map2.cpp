#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
   int n;
   cin>>n;
    
   map<int ,int> m;
   int s;
   for (int i = 0; i < n; i++)
   {
    cin>>s;
    m[s]++;
   }
   bool k= false;
   for(auto  it:m)
   { 
    if(it.first!=it.second)
    { k=true ;
        cout<<"1"<<endl;
    }
   }
   if(k==false )
   {
    cout<<"0"<<endl;
   }
   
return 0;
}