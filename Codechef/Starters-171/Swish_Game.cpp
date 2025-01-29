#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(), v.end()
#define print(v) for (auto data : v) cout << data << ' '
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

int main() {
    int t, m, k;  
    string str;
    cin >> t;

    while (t--) {
        cin >> m >> k;
        cin >> str;
        int s = 0;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'S')
                s++;
        }

        if (s >= k)
            cout << m << nl;
        else
            cout << k - s + m - 1 << nl;
    }

    return 0;
}
