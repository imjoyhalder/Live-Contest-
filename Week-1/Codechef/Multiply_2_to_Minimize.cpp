#include<bits/stdc++.h>
using namespace std;

vector<int> findSize(vector<int> &arr){
    vector<int> ans; 
    stack<int> st; 

    for(int i=0; i<arr.size(); i++){
        int current = arr[i]; 

        while(!st.empty() && st.top()==current){
            st.pop(); 
            current *= 2; 
        }
        st.push(current); 
        ans.push_back(st.size()); 
    }
    return ans; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int i=0; i<n; i++){
            cin>>arr[i]; 
        }
        vector<int> ans = findSize(arr); 
        for(int val: ans){
            cout<<val<<' '; 
        }
        cout<<endl; 
    }
    
      
    return 0;
} 