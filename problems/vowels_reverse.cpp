#include<bits/stdc++.h>
using namespace std;
string reverseVowels(string s) {
        int st=0,e=s.length()-1;
        while(st<e)
        {
            if(s[st]=='a'||s[st]=='e'||s[st]=='i'||s[st]=='o'||s[st]=='u'||s[st]=='A'||s[st]=='E'||s[st]=='I'||s[st]=='O'||s[st]=='U')
            {
                if(s[e]=='a'||s[e]=='e'||s[e]=='i'||s[e]=='o'||s[e]=='u'||s[e]=='A'||s[e]=='E'||s[e]=='I'||s[e]=='O'||s[e]=='U')
                {
                    swap(s[st],s[e]);
                    st++;
                    e--;
                }
                else{
                    e--;
                }
            }
             else if(s[e]=='a'||s[e]=='e'||s[e]=='i'||s[e]=='o'||s[e]=='u'||s[e]=='A'||s[e]=='E'||s[e]=='I'||s[e]=='O'||s[e]=='U')
            {
                if(s[st]=='a'||s[st]=='e'||s[st]=='i'||s[st]=='o'||s[st]=='u'||s[st]=='A'||s[st]=='E'||s[st]=='I'||s[st]=='O'||s[st]=='U')
                {
                    swap(s[st],s[e]);
                    st++;
                    e--;
                }
                else{
                    st++;
                }
            }
            else {
                st++;
                e--;
            }
        }
        return s;
    }
int main()
{
    string str;
    cin>>str;
    string strrev=reverseVowels(str);
    cout<<strrev<<endl;


}