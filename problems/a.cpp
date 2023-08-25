#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 int maximum(int *arr,int n,int maxi,int i)
 {
    int i=0;
    if(i==n)
    {
        return maxi;
    }
    else {
        maxi=max(arr[i],maxi);
        maximum(arr,n,maxi,i+1);
        return maxi;
    }
 }
int main()
{
 int n;
 cin>>n;
 int maxi=0;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
     cin>>arr[i];
 }
 int j=0;
 int k=maximum(arr,n,maxi,j);
 cout<<k<<endl;
 
return 0;
}