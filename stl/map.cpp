#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//  find the frequency of the each number in the array
// arr[15]={5,4,1,7,8,5,6,4,7,5,8,1,2,5,7};
int main()
{
    int n;
    cin >> n;
    map<int,int> m;
    int s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        // in the map value is initialized by 0 in the int
        m[s] = m[s] + 1;
    }
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    int maxi = 0;
    for (auto it : m)
    {
        maxi = max(maxi, it.second);
    }
    cout << maxi << endl;

    return 0;
}