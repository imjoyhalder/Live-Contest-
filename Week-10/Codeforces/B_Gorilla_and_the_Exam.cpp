#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    ll n, k; 
    cin >> n >> k; 
    vector<ll> arr(n); 
    map<ll,ll> mp; 
    
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        mp[arr[i]]++; 
    }

    // Count unique and duplicate elements
    ll unique_element = 0; 
    ll duplicate_element = 0; 
    for(auto it : mp){
        if(it.second > 1){
            duplicate_element++; 
        }
        else{
            unique_element++; 
        }
    }

    // Calculate the minimum value of f(b)
    ll result = unique_element + duplicate_element - min(k, duplicate_element);
    cout << result << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; 
    cin >> t; 
    while(t--){
        solve(); 
    }
       
    return 0;
}
