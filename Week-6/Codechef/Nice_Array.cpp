#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int N,K; 
    cin>>N>>K; 
    
    int sum = 0, cnt = 0; 
    
    for(int i=0; i<N; i++){
        int A; cin>>A; 
        sum+= floor(1.0*A/K); 
        if(A%K!=0){
            cnt++; 
        }
    }
    if(sum>0 || sum<-cnt){
        no nl;  
    }
    else{
        yes nl; 
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