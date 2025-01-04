#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int> v(n); 
    map<int,int> mp; 

    for(int i=0; i<n ;i++){
        cin>>v[i]; 
        mp[v[i]]++; 
    }

    long long score=0; 

    for(auto it: mp){
        // if(it.second> 1 && it.second%2==0){
        //     score += (it.second)/2; 
        // }
        // else if(it.second>1 && it.second%2!=0){
            
        // }
         if(it.second> 1){
            score += (it.second)/2; 
        }

    }
    cout<<score<<endl; 

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