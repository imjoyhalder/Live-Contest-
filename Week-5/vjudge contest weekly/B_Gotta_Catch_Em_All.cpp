#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

void solve(){
    int n,x,y; 
    cin>>n>>x>>y; 
    vector<int> arr(n); 
    
    for(int &x: arr) cin>>x; 

    ll ans = 0; 

    for(int i=0; i<n; i++){
        if(arr[i]*x<y){
            ans += arr[i]*x; 
        }
        else{
            ans += y; 
        }
    }
    cout<<ans<<nl; 
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