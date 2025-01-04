#include<bits/stdc++.h>
using namespace std;

vector<long long> dp(100000, -1);

long long  fact(int n) {
    if (n == 0) return 1; 

    if (dp[n] != -1) return dp[n];

    dp[n] = n * fact(n - 1);
    return dp[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        int n,d; 
        cin>>n>>d; 
        long long ans = fact(30); 
        cout<<ans<<endl; 
        // if(ans%d==0){
        //     cout<<"YES"<<endl; 
        // }
        // else{
        //     cout<<"NO"<<endl; 
        // }
    }
    

      
    return 0;
} 