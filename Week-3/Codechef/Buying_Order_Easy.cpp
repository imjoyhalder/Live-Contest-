#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int> B(n+1); 

    for(int i=1; i<=n; i++) cin>>B[i];

    int one = 0; 
    for(int i=1; i<n; i++){
        if(B[i]==1){
            one++; 
        }
    }

    int zero = 0; 
    for(int i=2; i<=n; i++){
        if(B[i]==0){
            zero++; 
        }
    }

    int count_min = min (one+zero, n-1);
    cout<<count_min+n<<endl; 
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