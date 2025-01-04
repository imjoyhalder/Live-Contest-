#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

void solve(){
    int n,m; cin>>n>>m; 
    string a,b; 
    cin>>a>>b; 

    //auto it = a.find(b); 
    size_t pos = a.find(b);

    if(pos == string::npos){
        cout<<0<<nl; 
    }
    else{
        
    }
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