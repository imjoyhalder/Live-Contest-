#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve() {
    string str1, target = "ADVITIYA"; 
    cin >> str1; 
    ll ans = 0; 

    for (int i = 0; i < 8; i++) {
        int diff = (target[i] - str1[i] + 26) % 26; 
        ans += diff;
    }
    
    cout << ans << nl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; 
    cin >> t; 
    while (t--) {
        solve(); 
    }
       
    return 0;
}
