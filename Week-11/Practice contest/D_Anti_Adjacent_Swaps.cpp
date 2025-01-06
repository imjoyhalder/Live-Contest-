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
    vector<pair<int,int>> arr(n); 
    
    for(int i=0; i<n; i++){
        int x; cin>>x; 
        arr[i].first = x; 
        arr[i].second = i; 
    }

    if(is_sorted(all(arr))){
        cout<<"YES"<<nl; 
        return; 
    }

    sort(all(arr)); 
    // for(auto it: arr){
    //     cout<<'['<<it.first<<','<<it.second<<']'<<" "; 
    // }

    for(int i=0;i<n-1; i++){
        if(abs(arr[i].second-arr[i+1].second)<2){
            no nl; 
            return; 
        }
    }
    cout<<"YES"<<nl; 
    cout<<nl; 

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