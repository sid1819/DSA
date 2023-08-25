#include<bits/stdc++.h>
using namespace std;

//total distict to reach the nth stair 
//condition : you can take one stair or two stair at a time 
int countdistinctwaytoclimbstair(long long nstair)
{
    //base case
    if(nstair<0)
    return 0;

    if(nstair==0)
    return 1;

//recursion 
int ans=countdistinctwaytoclimbstair(nstair-1)+countdistinctwaytoclimbstair(nstair-2);
return ans;
}