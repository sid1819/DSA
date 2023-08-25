#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin >> n>>k;
    multiset<ll> s;
    ll m;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        s.insert(m);
    }
    ll total_candy=0;
    for (int i = 0; i <k; i++)
    {
        auto it=s.end();
        it--;
        ll candy_ct=*it;
        total_candy=total_candy+candy_ct;
        // candy_ct=candy_ct/2;
         s.erase(it);
         s.insert(candy_ct/2);
    }
    cout<<total_candy<<endl;
    

    return 0;
}