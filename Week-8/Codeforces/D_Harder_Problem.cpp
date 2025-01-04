// #include<bits/stdc++.h>
// #define ll long long
// #define nl '\n'
// #define all(v) v.begin(),v.end()
// #define print(v) for(auto data: v) cout<<data<<' '
// #define yes cout<<"YES"<<nl; 
// #define no cout<<"NO"<<nl; 
// using namespace std;

// void solve(){
//     int n; cin>>n; 
//     vector<int> arr(n),frq(300005,0); 
//     for(auto &x: arr) cin>>x; 
//     vector<bool> used(300005,false);

    

//     int n_unused = 1; 
//     for(int i: arr) used[i] = true; 

//     for(int x: arr){
//         if(frq[x]==0){
//             cout<<x<<' '; frq[x]++; 
//         }
//         else{
//             while(used[n_unused]){
//                 n_unused++; 
//             }
//             cout<<n_unused<<' '; 
//             used[n_unused] = true;
//         }
//     }
//     cout<<nl; 
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL); 
       
//     int t; cin>>t; 
//     while(t--){
//         solve(); 
//     }
       
//     return 0;
// } 

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
    vector<int> arr(n); 
    for(auto &x: arr) cin>>x; 

    unordered_map<int,int> frq; 
    vector<bool> used(200005,false);

    int n_unused = 1; 
    for(int i: arr) used[i] = true; 

    for(int x: arr){
        if(frq[x]==0){
            cout<<x<<' '; frq[x]++; 
        }
        else{
            while(used[n_unused]){
                n_unused++; 
            }
            cout<<n_unused<<' '; 
            used[n_unused] = true;
        }
    }
    cout<<nl;
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