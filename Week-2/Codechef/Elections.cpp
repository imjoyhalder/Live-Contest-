#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; cin>>t; 
    while(t--){
        ll state,extra_vote; 
        cin>>state>>extra_vote; 
        vector<ll> A(state+1),B(state+1); 
        for(ll i=1; i<=state; i++){
            cin>>A[i]; 
        }
        for(ll i=1; i<=state; i++){
            cin>>B[i]; 
        }
        vector<ll> need_vote; 
        int A_win = 0,B_win = 0; 
        for(ll i=1; i<=state; i++){
            if(A[i]>B[i]){
                A_win++; 
            }
            else if(B[i]>A[i]){
                int dif = B[i]-A[i]+1; 
                need_vote.push_back(dif); 
            }
            else{
                need_vote.push_back(1); 
            }
        }
        if(A_win>state/2){
            cout<<"YES"<<endl; 
            continue; 
        }
        sort(need_vote.begin(),need_vote.end()); 
        for(ll val: need_vote){
            if(extra_vote>=val){
                extra_vote-= val; 
                A_win++; 
            }
            else{
                break;
            }
        }
        if(A_win>(state/2)){
            cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl; 
        }
    }
      
    return 0;
} 