#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int t; cin >> t; 
    while(t--) {
        int n; 
        cin >> n; 
        vector<int> arr(n); 
        int sum = 0; 
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i]; 
        }

        if(sum % 2 == 0){
            cout << n << endl; 
        } 
        else{
            int leftIdx = -1, rightIdx = -1; 

            for(int i = 0; i < n; i++) {
                if(arr[i] % 2 != 0) {
                    leftIdx = i; 
                    break;
                }
            }

            for(int i = n - 1; i >= 0; i--) {
                if(arr[i] % 2 != 0) {
                    rightIdx = i; 
                    break;
                }
            }

            int largestSize = max(n - 1 - leftIdx, rightIdx);
            cout << largestSize << endl; 
        }
    }
    
    return 0;
}
