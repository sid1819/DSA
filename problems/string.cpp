#include<bits/stdc++.h>
using namespace std;

// get length of string

int getlength(char name[])
{
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    
}

void palindrome(char name[], int n)
{
    int s=0,e=n-1;
    for (int i = 0; i <=n/2; i++)
    {
        if(name[s]!=name[e])
        {
            cout<<"no palindrome"<<endl;
            break;
        }
        else{
            s++;
            e--;
            continue;
        }
    }
    
}

bool checkpal(char name[], int n)
{
    int s=0,e=n-1;
     while(s<=e)
     {
        if(name[s]!=name[e])
        {
            return 0;
        }
        else {
            s++;
            e--;
        }
     }
     return 1;
    
}

char lowercase(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
    
}

void replacespace(string s)
{
    string str="";
    for (int i = 0; i <s.length(); i++)
    {
        if(s[i] ==' ')
        {
            s.push_back('@');
            s.push_back('4');
            s.push_back('2');
        }
        else{
            s.push_back(s[i]);
        }
    }
    
}

