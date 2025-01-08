#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int N; cin>>N; 
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> result(N, 0); 
    int max_so_far = A[0];
    result[0] = 1; 
    
    for (int i = 1; i < N; i++) {
        if (A[i] > max_so_far) {
            result[i] = 1; 
        }
        max_so_far = max(max_so_far, A[i]);
    }
    
    print(result); 
    cout << endl;
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