#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve() {
    int n;
    cin >> n; 
    
    vector<int> arr(n); 
    ll sum = 0; 
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
        sum += arr[i]; 
    }
    
    int total_assignments = n + 1;
    int min_required = ceil(0.5 * total_assignments * 100); 
    int needed_score = min_required - sum;
    
    if (needed_score > 100) {
        cout << -1 << nl; 
    } else {
        cout << max(0, needed_score) << nl; 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        solve(); 
    }
       
    return 0;
} 