#include<bits/stdc++.h>
using namespace std;
int factorial(long long int  n)
{
    if(n==0)
    return 1;

    long long int smallfun=factorial(n-1);
    long long int  bigfun=n*smallfun;
    return bigfun;
}
int power(int m,int n)
{
    if(n==0)
    return 1;

    long long int  smallfun=power(m,n-1);
    long long int  bigfun=m*smallfun;
    return bigfun;
}
int main()
{
    long long int n;
    cin>>n;
     long long int  val=factorial(n);
     cout<<val<<endl;
     long long int  m,l;
     cin>>m>>l;
     long long int  value=power(m,l);
     cout<<value<<endl;
}