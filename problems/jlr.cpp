#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int power(int ind,int j)
{
    if(j==0) return 1;
    int ans=ind;
    for(int i=1;i<j;i++)
    {
         ans *=ind;
    }
    return ans;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<long long int> ans;
    for (long long int i = 1; i <=81; i++)
    {
        long long int x=b* power(i,a)+c;
        if(sum(x)==i)
        ans.push_back(x);
          
    }
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}