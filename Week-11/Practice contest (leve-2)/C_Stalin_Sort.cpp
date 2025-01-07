#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    int ans = 0;
    for (int i=0; i<n; i++) {
        int curr = 0;
        for (int j=i; j<n; j++) {
            if (arr[j] <= arr[i]) {
                curr += 1;
            }
        }
        ans = max(ans, curr);
    }
    cout << n - ans << "\n";
}


int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve(); 
    }
  return 0;
}