#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int fibonacci(ll n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    ll ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    ll ans = fibonacci(n);
    cout << ans << endl;
}