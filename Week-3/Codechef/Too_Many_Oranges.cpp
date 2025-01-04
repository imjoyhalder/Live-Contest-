#include<bits/stdc++.h>
using namespace std;

bool canEatExactSlices(int N, int K) {
    int minSlices = 10 * N;
    int maxSlices = 12 * N;
    return (K >= minSlices && K <= maxSlices);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int n,k; 
        cin>>n>>k; 

        if(canEatExactSlices(n,k)){
            cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl; 
        }
    }
      
    return 0;
} 