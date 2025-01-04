#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    
    while(t--){
        int n; cin>>n; 
        vector<int> v; 
        int cnt_neg = 0; 
        for(int i=0; i<n; i++){
            int val; cin>>val; 
            if(val<0){
                cnt_neg++; 
            }
        }
        if(n==0 || n==cnt_neg) cout<<0<<endl; 
        else {
            cout<<cnt_neg<<endl; 
        }

    }
      
    return 0;
} 