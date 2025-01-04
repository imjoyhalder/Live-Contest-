#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n; cin>>n;  
    ll a,b; cin>>a>>b; 
    vector<ll> arr(n); 

    ll s = 0; 
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        s += arr[i]; 
    }
    sort(all(arr)); 
    ll low  = s-b; 
    ll up = s-a; 

    ll cnt = 0; 

    for(int i=0; i<n;  i++){
        ll min_val = low -arr[i]; 
        ll max_val = up -arr[i]; 

        int l = lower_bound(arr.begin() + i + 1, arr.end(), min_val) - arr.begin();
        int r = upper_bound(arr.begin() + i + 1, arr.end(), max_val) - arr.begin();
        cnt += (r-l); 
    }
    cout<<cnt<<nl; 
  
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