#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    ll a,b,c,d; 
    cin>>a>>b>>c>>d; 

    ll ml = a*b*c*d; 

    string str = to_string(ml); 
    int n = str.size()-1; 
    cout<<str[n-1]<<str[n]<<endl; 
       
    return 0;
} 