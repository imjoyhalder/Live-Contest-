#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int N, M, K; 
        cin >> N >> M >> K;

        int min_diff = INT_MAX; 

        for (int l = 1; l <= N; ++l) {
            for (int w = 1; w <= M; ++w) {
                int perimeter = 2 * (l + w); 
                int diff = abs(perimeter - K); 
                min_diff = min(min_diff, diff); 
            }
        }
    cout << min_diff << endl;
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

