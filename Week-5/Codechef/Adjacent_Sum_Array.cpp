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
    vector<int> B(n-1); 
    for(int &x: B) cin>>x; 

    sort(all(B)); 
    vector<int>A(n); 
    A[0] = 1; 
    A[1] = B[0]-A[0]; 

    for(int i=2; i<n; i++){
        A[i] = B[i-1]-A[i-1]; 
    }

    print(A); 
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