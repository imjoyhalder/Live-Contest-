#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    ll n,x,k; cin>>n>>x>>k; 
    string str; cin>>str; 

    int cnt = 0, penalty = 0;  
    for(int i=0; i<n; i++){
        if(str[i]=='1'){
            cnt++; 
        }
        else{
            penalty+= cnt; 
        }

    }
    cout<<((penalty<=x && penalty%k==0)? 1:2)<<endl; 
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