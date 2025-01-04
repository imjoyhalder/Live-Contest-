#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N; // Number of items
        cin >> N;
        
        vector<ll> A(N); // Costs of the items
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        // Sort in descending order
        sort(A.begin(),A.end());
        
        ll min_dis = 0; 
        int cur_dis = 0; 
        for(int val: A){
            if(cur_dis==0){
                min_dis += val; 
                cur_dis++; 
            }
            else{
                if((val-cur_dis)>=0){
                    min_dis+=(val-cur_dis); 
                    cur_dis++; 
                }
                else{
                    cur_dis++; 
                }
            }
        } 
        cout<<min_dis<<endl; 
        
    }
    
    return 0;
}
