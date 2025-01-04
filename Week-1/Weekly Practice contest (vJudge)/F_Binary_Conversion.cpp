#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int n,op; 
        cin>>n>>op; 
        cin.ignore(); 

        string s,t; 
        cin>>s>>t; 
        int dif = 0; 

        for(int i=0; i<n;  i++){
            if(s[i]!=t[i]){
                dif++; 
            }
        }

        if(dif<=op ){
            cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl; 
        }
    }
    return 0;
} 