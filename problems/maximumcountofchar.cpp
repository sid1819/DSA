#include<bits/stdc++.h>
using namespace std;

char getmaxocccharcter(string s)
{

    // here we will store the all charachter occuring count in the given string 
    int arr[26]={0};
    for (int i = 0; i <s.length(); i++)
    {
        int number=0;
        number =s[i]-'a';
        arr[number]++;
    }

    int maxi=-1,ans=0;
    for (int i = 0; i < 26; i++)
    {
        // herre we will find the max number of count of the char 
         if(maxi<arr[i])
         {
            ans=i;
            maxi=arr[i];
         }
    }
    return ans+'a';   //here we are return  the character 

    
    
}
int main()
{
    string str;
    cin>>str;
    char ch =getmaxocccharcter(str);
    cout<<ch<<endl;


}