#include<bits/stdc++.h>
using namespace std;
int power(int n,int m)
{
    if(m==0)
    {
        return 1;

    }
    if(m==1)
    return n;

    int ans =power(n,m/2);
    if(m%2==0)
    return ans*ans;

    else{
        return n*ans*ans;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int val=power(n,m);
    cout<<val<<endl;
}