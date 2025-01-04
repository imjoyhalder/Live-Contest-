#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; 
    cin>>n>>m; 
    vector<int> A(n), B(m); 

    for(int i=1; i<=n; i++){
        cin>>A[i]; 
    } 

    for(int i=1; i<=m; i++){
        cin>>B[i]; 
    }

    int sad = 0; 
    for(int i=1; i<=m; i++){
        if(A[B[i]]<=0){
            sad++; 
        }
        else{
            A[B[i]] -= 1; 
        }
    }
    cout<<sad<<endl; 

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