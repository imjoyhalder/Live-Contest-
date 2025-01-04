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
    vector<int> arr1(n),arr2(n); 
    for(int &x: arr1) cin>>x; 
    for(int &x: arr2) cin>>x; 

    int m = 0, s = 0; 
    for(int i=0; i<n; i++){
        if(i<n-1){
            if(arr1[i]>arr2[i+1]){
                m+=arr1[i]; 
                s+= arr2[i+1]; 
            }
        }
        else{
            m+= arr1[i]; 
        }
    }
    cout<<(m-s)<<nl; 
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