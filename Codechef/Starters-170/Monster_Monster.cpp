#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    ll n,x; 
    cin>>n>>x; 

    vector<ll> arr(n); 
    for(int i=0; i<n;i++){
        cin>>arr[i]; 
    }
    sort(all(arr)); 
    ll fight = 0; 

    for(ll i=0; i<n; i++){
        ll each_attack = arr[i]+(n-i-1)*x; 
        fight = max(each_attack,fight); 
    }
    cout<<fight<<nl; 
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