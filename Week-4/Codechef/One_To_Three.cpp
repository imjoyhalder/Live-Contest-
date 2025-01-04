#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int> A(n); 

    for(int &x: A) cin>>x; 

    long long sum = 0; 
    for(int i=1; i<n-1; i++){
        if(A[i-1]+A[i+1]==4){
            int val = 4-A[i]; 
            A[i] = val; 
        }
    }
    cout<<accumulate(A.begin(),A.end(),0)<<endl; 
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