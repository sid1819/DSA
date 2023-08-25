#include <bits/stdc++.h>
using namespace std;
int lengthofstring(vector<string>& strs)
{
    int arr[strs.size()]={0};
    for (int i = 0; i <strs.size(); i++)
    {
         arr[i]=strs[i].length();
    }
int mini=*min_element(arr,arr+strs.size());
return mini;
    
}
string longestCommonPrefix(vector<string> &strs)
{

    string str = "";
    int count = 0;
    for (int j = 0; j <lengthofstring(strs); j++)
    {
        for (int k = 0; k < strs.size(); k++)
        {
            if (strs[0][j] != strs[k][j])
            {
                count++;
                break;
            }
            else
            {
                continue;
            }
        }
        if (count == 0)
        {
            str.push_back(strs[0][j]);
        }
        else
        {
          break; 
        }
    } 
    return str;
}
int main()
{
    vector<string> st;
    string t;
    for (int i = 0; i < 4; i++)
    {
        cin >> t;
        st.push_back(t);
    }
    string n = longestCommonPrefix(st);
    cout << n << endl;
}
