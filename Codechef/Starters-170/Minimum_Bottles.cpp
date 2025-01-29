#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n, x; 
    cin>>n>>x; 

    vector<ll> arr(n); 
    ll cur_tota_water = 0; 
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        cur_tota_water+= arr[i]; 
    }

    int minBottles = (cur_tota_water + x - 1) / x;  
    cout << minBottles << endl;
    
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