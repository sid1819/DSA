#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void merge(int *arr,int s,int mid,int e)
{
    int i=s;
    int j=mid+1;
    int k=s;
    int v[e]={0};
    while(i<=mid && j<=e)
    {
    if(arr[i]<arr[j])
    {
         v[k]=(arr[i]);
        k++;
        i++;
    }
    else{
        v[k]=(arr[j]);
        k++;
        j++;
    }
    }
    if(i>mid)
    {
        while(j<=e)