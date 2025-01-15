#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int minop(int n, int k, const vector<int>& arr) {
    unordered_map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }

    int kFreq = freqMap[k]; 
    int maxFreq = kFreq; 

   
    for (const auto& entry : freqMap) {
        maxFreq = max(maxFreq, entry.second);
    }

    if (maxFreq == kFreq) {
        return 0;
    }

     
    int left = 0, right = n - 1, operations = 0;
    while (maxFreq > kFreq) {
        if (arr[left] != k) {
            operations++;
            freqMap[arr[left]]--;
            maxFreq = max(maxFreq, freqMap[arr[left]]);
            left++;
        } else if (arr[right] != k) {
            operations++;
            freqMap[arr[right]]--;
            maxFreq = max(maxFreq, freqMap[arr[right]]);
            right--;
        } else {
            break;
        }
    }
    return operations; 

}



void solve(){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr(n); 
        for(int &x: arr) cin>>x; 

        cout<<minop(n,k,arr)<<nl; 
    }
       
    return 0;
} 