#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    string str; cin>>str; 
    
    string B = ""; 

    for(int i= str.size()-1; i>=0; --i){
        if(str[i]=='p'){
            B+='q';
        }
        else if(str[i]=='q'){
            B += 'p'; 
        }
        else if(str[i]=='w'){
            B+='w';
        }
    }
    cout<<B<<nl; 
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