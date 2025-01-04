#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){

        int n; cin>>n; 
        vector<int> arr(n); 
        int mx = INT_MAX; 
        for(int i=0; i<n; i++){
            cin>>arr[i]; 
            mx = min(mx,arr[0]-1); 
        }

        if(mx<=0){
            cout<<0<<endl; 
        }
        else{
            cout<<mx<<endl; 
        }

    }
    return 0;
} 

