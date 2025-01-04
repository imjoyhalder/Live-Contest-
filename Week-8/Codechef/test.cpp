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
        vector<int> A(n); 
        for(int &x: A) cin>>x; 

        int seconds = 0; 
        while(true){
            bool stable = true; 
            for(int i=0; i<n-1; i++){
                if(A[i]<A[i+1]){
                    A[i] = A[i+1]; 
                    stable = false; 
                }
            }
            if(stable){
                break;; 
            }
            seconds += 1; 
        }
        cout<<seconds<<nl; 
    }
       
    return 0;
} 