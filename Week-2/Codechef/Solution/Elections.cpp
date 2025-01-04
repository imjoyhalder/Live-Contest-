#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl; 
#define no cout<<"NO"<<endl; 
using namespace std;

void solve(){
    int n,x; cin>>n>>x; 

    vector<int> A(n),B(n); 
    for(int i=0; i<n; i++){
        cin>>A[i]; 
    }

    for(int i=0; i<n; i++){
        cin>>B[i]; 
    }
    vector<int> dif; 

    for(int i=0; i<n; i++){
        dif.push_back(A[i]-B[i]); 
    }

    sort(dif.begin(),dif.end(),greater<int>()); 


    for(int i=0; i<dif.size(); i++){
        if(x<=0){
            break;
        }
        if(dif[i]<=0){
            if(dif[i]==0){
                x--; 
                dif[i] = 1; 
            }
            else{
                x -= min(x,abs(dif[i])); 
                if(x>0){
                    x--; 
                    dif[i] = 1; 
                }
            }
        }
    }
    int cnt = 0; 
    for(int i=0; i<n ;i++){
        if(dif[i]>0){
            cnt++; 
        }
    }
    if(cnt>n/2){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl; 
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