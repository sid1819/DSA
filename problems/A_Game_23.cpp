#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll k = m / n;
    ll rem = m % n;
    int count = 0;
    if (m == n)
    {
        cout << 0 << endl;
    }

    else if (rem == 0)
    {
        while (k % 3 == 0)
        {
            k = k / 3;
            count++;
        }
        while (k%2==0 )
        {
            k = k / 2;
            count++;
        }
        cout << count << endl;
    }
    else if()
    {
        cout << -1 << endl;
    }
    return 0;
}