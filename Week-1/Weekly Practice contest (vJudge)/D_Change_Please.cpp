#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int dollar; 
        cin>>dollar; 
        int owes = 100-dollar;  
        int back = 0; 
        while(owes>=10){
            back += 10; 
            owes-=10; 
        }
        cout<<back<<endl; 
    }
      
    return 0;
} 