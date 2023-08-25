#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll n,m;
 cin>>n>>m;
 ll k=n/m;
 ll sum=n+k;
 cout<<n+(sum/m)<<endl;
    return 0;
}