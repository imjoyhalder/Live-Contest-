#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int hour,one_earn,two_earn; 
        cin>>hour>>one_earn>>two_earn; 
        if(one_earn>(two_earn/2)){
            cout<<one_earn*hour<<endl; 
        }
        else{
            int d = hour/2; 
            int ans = d*two_earn; 
            if(hour%2!=0){
                ans+= one_earn; 
            }
            cout<<ans<<endl; 
        }

    }
      
    return 0;
} 