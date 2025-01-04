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
    vector<ll> vec(n); 
    for(ll &x: vec) cin>>x; 

    ll coutn = 0, s = 0; 
    for(int i=0; i<n; i++){
        coutn += vec[i]; 
        s+= abs(coutn); 
    }
    cout<<s<<nl; 
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