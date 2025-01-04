#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void joy_solution(){
    ll N, a,b, c; cin>>N>>a>>b>>c; 

    ll one_row = min(a,N); 
    ll two_row = min(b,N);

    ll remaing_1 = N-one_row; 
    ll remaning_2 = N-two_row; 

    ll sits = min(c,remaing_1+remaning_2); 
    ll ans = one_row+ two_row+ sits; 

    cout<<ans<<nl; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        joy_solution(); 
    }
       
    return 0;
} 