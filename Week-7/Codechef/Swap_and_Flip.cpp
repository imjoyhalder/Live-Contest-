#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl;
#define faster  ios::sync_with_stdio(false); cin.tie(nullptr); 
using namespace std;


int main(){
    faster; 
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        string S,T; cin>>S>>T; 

        int S_cnt = count(S.begin(),S.end(),'1'); 
        int T_cnt = count(T.begin(),T.end(),'1'); 
        int result = abs(S_cnt-T_cnt); 

        if(result%2==0){
            cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl; 
        }
    }
       
    return 0;
} 