#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll k;
    map<ll, ll> a;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a[k]++;
    }
    bool b = true;
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        if (a[k] > 0)
        {

            cout << "YES" << endl;
            a[k]--;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
     
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}