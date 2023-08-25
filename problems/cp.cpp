#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
     
}
int findnumber(string s,int n)
{
    bool t=false;
    for(int i=n-1;i>0;i--)
    {
        if(s[i]>s[i-1])
        {
        t=true;
        swap(s[i],s[i-1]);
        break;
        }
    }
     int number =stoi(s);
     if(t)
     return number;

     return -1;
}
int main()
{
 char number[12]; //this will take a inpout of character as string of length less than or equal to 12;

//    cin>>number;
//    string s=number;
//    int n=strlen(number);
//    next_permutation(number,number+n);
//    if(s==number)
//    {
//     cout<<-1<<endl;
//    }
//    else cout<<number<<endl;
cin>>number;
int k=0;
int n=strlen(number);
for(int i=n-1;i>0;i--)
{
    if(number[i]>number[i-1])
    {
        k=i-1;
        break;
    }
}
for(int i=n-1;i>=k+1;i--)
{
    if(number[i]>number[k])
    {
        swap(number[i],number[k]);
        break;
    }
}
sort(number+k+1,number+n);
cout<<number<<endl;

// string s;
// cin>>s;
// int n=s.length();
//  cout<<s<<endl;
return 0;
}