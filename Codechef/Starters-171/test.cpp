#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

vector<string> grid = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};

int operation(int n, string &str){
    int mn = INT_MAX; 
    for(const string &ptr : grid){
        
        int turn = 0; 
        for(int i=0; i<n; i++){
            if(str[i] != ptr[i%3]){
                turn++; 
            }
        }
        mn = min(mn,turn); 
    }
    return mn; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int n; 
        string str; 
        cin>>n>>str; 
        cout<<operation(n,str)<<endl; 
    }
       
    return 0;
} 