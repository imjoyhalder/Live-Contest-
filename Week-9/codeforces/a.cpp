#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(), v.end()
#define print(v)        \
    for (auto data : v) \
    cout << data << ' '
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll sum = a + b + c;
    ll full = n / sum;
    ll des = n % sum;

    if (des == 0)
    {
        cout << full * 3 << endl;
        return;
    }
    if (des <= a)
    {
        cout << full * 3 + 1 << endl;
    }
    else if (des <= a + b)
    {
        cout << full * 3 + 2 << endl;
    }
    else
    {
        cout << full * 3 + 3 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}