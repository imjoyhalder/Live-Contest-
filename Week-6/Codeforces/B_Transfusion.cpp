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
       
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
    vector<ll> A(n); 

    for(ll &x:A ) cin>>x; 

    ll t_sum = accumulate(all(A),0LL); 
    if(t_sum%n!=0){
        no nl; 
        continue;
    }

    ll target = t_sum/n; 

    ll prsum = 0; 
    bool flag = true; 

    for(int i=0; i<n-1; i++){
        prsum += A[i] - target; 
        if(prsum<0){
            flag = false; 
            break;
        }
    }
    if(flag){
        yes nl; 
    }else{
        no nl; 
    }
    }
       
    return 0;
} 



