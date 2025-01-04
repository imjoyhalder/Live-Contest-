#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl 
#define no cout<<"NO"<<nl 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    ll A,B,C,D; 
    cin>>A>>B>>C>>D; 
    //cout<<pow(A,B)<<"--"<<pow(C,D)<<nl; 
    if(pow(C,D)<pow(A,B)){
        yes; 
    }
    else{
        no;
    } 
    return 0;
} 