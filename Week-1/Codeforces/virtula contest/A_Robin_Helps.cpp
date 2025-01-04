#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; 
    cin >> t; 
    while(t--){
        int n, robin,k; 
        cin >> n >>k; 
        vector<int> arr(n); 
        int total_people_get = 0; 
        robin = 0; 
        for(int i = 0; i < n; i++){
            cin >> arr[i]; 
            if(arr[i] >= k){
                robin += arr[i]; 
            }
            else if(arr[i] == 0 && robin > 0){ 
                total_people_get++; 
                robin--; 
            }
        }
        cout << total_people_get << endl; 
    }
      
    return 0;
}
