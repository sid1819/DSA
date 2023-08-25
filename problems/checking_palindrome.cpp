#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    string str2=str;
    reverse(str2.begin(),str2.end());//  we use here inbuilt function this is the function  
    if(str==str2)
    {
        cout<<"string is palindrome"<<endl;     
    }
    else{
        cout<<"string is not a palindrome string "<<endl;
    }
}