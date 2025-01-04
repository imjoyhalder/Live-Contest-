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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int x,y,z; 
    cin>>x>>y>>z; 
    if(x<(y*z)){
        cout<<-1<<nl; 
    }
    else{
        cout<<x-(y*z)<<nl; 
    }
       
    return 0;
} 