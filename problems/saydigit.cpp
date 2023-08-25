#include<bits/stdc++.h>
using namespace std;
void saydigit(int n,string arr[])
{
    // base condition :

    if(n==0)
    return ;

    //processing
    int digit= n%10;
    n=n/10;
    // cout<<arr[digit]<<" "; this will print in the reverse order the digit 

    // recursive call:

    saydigit(n,arr);

    cout<<arr[digit]<<" ";
    // this will print the digit in right order
}
int main()
{
 string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 int n;
 cin>>n;
 cout<<endl;
 saydigit(n,arr);
 cout<<endl;
}