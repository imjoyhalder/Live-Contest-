#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        int even = 0, odd=0; 
        for(int i=1; i<=n; i++){
            if(n%i==0){
                if(i%2==0){
                    even++; 
                }
                else{
                    odd++; 
                }
            }
        }
        if(even>odd){
            cout<<1<<endl; 
        }
        else if(even==odd){
            cout<<0<<endl; 
        }
        else{
            cout<<-1<<endl; 
        }
    }
      
    return 0;
} 