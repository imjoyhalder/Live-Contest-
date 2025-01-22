#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        l--;
        r--;
        int original_sum = 0;
        for (int i = l; i <= r; i++) {
            original_sum += a[i];
        }
        
        int min_sum = original_sum;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                vector<int> temp = a;
                reverse(temp.begin() + i, temp.begin() + j + 1); 
                
                int current_sum = 0;
                for (int k = l; k <= r; k++) {
                    current_sum += temp[k];
                }
                min_sum = min(min_sum, current_sum);
            }
        }
        
        cout << min_sum << endl;
    }
}

int main() {
    solve();
    return 0;
}
