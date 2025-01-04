#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n,m;
        cin>>n>>m;
        vector<string>arr(n);
        for(string &x: arr) cin>>x; 
        int c=0,x=0;
        for(int i=0;i<n;i++)
        {
            int len=arr[i].length();
            if(c+len<=m){
                c+=len;
                x++;
            }
            else 
            {
                break;
            }
        }
        cout<<x<<endl;
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
