#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

void solve(){
    int n,k; 
    cin>>n>>k; 
    vector<int> arr(n); 

    for(int &x: arr) cin>>x; 

    ll mx = *max_element(all(arr)); 
    if(mx<k){
        cout<<-1<<nl; 
    }
    else{
        ll mn = INT_MAX; 
        for(ll val: arr){
            if(val>=k){
                mn = min(mn,val%k); 
            }
        }
        cout<<mn<<nl; 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t;cin>>t; 
    while(t--){
        solve(); 
    }
       
    return 0;
} 