#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n; cin>>n; 
    string A,B; cin>>A>>B; 

    int all_one = 0, s_one = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] == '1' or B[i] == '1') {
            all_one++; 
            if ((A[i] == '1' and B[i] == '0') or (A[i] == '0' and B[i] == '1')) {
                s_one++;
            }
        }
    }

    if (all_one % 2 == 1 || s_one > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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