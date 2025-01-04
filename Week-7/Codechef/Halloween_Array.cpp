#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    
}
ll calculateHalloweenValue(const vector<int>& arr){
    int n = arr.size(); 
    ll result = 1; 
    const ll LIMIT = 1e9; 

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            result *= (arr[i] ^ arr[j]); 
            if(result>LIMIT){
                LIMIT+1; 
            }
        }
    }
    return result; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        ll l,r; 
        cin>>l>>r;

        vector<int> arr(n); 
        for(int &x: arr) cin>>x; 

        ll val = calculateHalloweenValue(arr); 

        if(val>=l && val<=r){
            yes nl; 
        } 
        else{
            no nl; 
        }
    }
       
    return 0;
} 