#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int n,price; 
        cin>>n>>price; 

        vector<int> A(n); 
        for(int &x: A) cin>>x; 

        for(int i=0; i<n; i++){
            int x; 
            cin>>x; 
            A[i] = A[i]*x; 
        }
        sort(A.rbegin(),A.rend());
        int cnt = 0; 
        while(cnt<n && price>0){
            price -=A[cnt]; 
            cnt++; 
        } 
        if(price<=0){
            cout<<cnt<<nl; 
        }
        else{
            cout<<-1<<nl; 
        }

    }
       
    return 0;
} 