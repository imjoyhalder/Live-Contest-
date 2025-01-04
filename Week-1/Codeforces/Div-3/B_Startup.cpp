#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int shelves, bottle; 
        cin>>shelves>>bottle; 

        vector<int> arr(bottle); 
        for(int i=0; i<bottle; i++){
            int brand, cost; 
            cin>>brand>>cost; 
            arr.push_back(cost); 
        }
        sort(arr.begin(),arr.end(),greater<int>()); 
        int i=0; 
        long long earn = 0; 
        while(i<shelves && i<bottle){
            earn+=arr[i]; 
            i++; 
        }  
        cout<<earn<<endl; 
    }
    return 0;
} 

// xiaomi redmi A4 15k
// Redmi 14C 17K