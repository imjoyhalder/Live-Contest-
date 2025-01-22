#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int countMinimalCoprimeSegments(int l, int r) {
    if (l == r) {
        return (gcd(l, r) == 1) ? 1 : 0;
    }
    return r - l + 1;
}

void solve(){
    int l, r;
        cin >> l >> r;
        
        if(l==1 && r==1){
            cout<<1<<endl; 
        }
        else if(l==r){
            cout<<0<<endl; 
        }
        else{
            cout << countMinimalCoprimeSegments(l, r)-1 << endl;
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