#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}

bool canBeSorted(vector<int> &p) {
    map<int, vector<int>> bitGroups;

    for (int i = 0; i < p.size(); ++i) {
        int setBits = countSetBits(p[i]);
        bitGroups[setBits].push_back(i);
    }

    for (auto it = bitGroups.begin(); it != bitGroups.end(); ++it) {
        int setBits = it->first;
        vector<int>& indices = it->second;

        vector<int> values;
        for (int idx : indices) {
            values.push_back(p[idx]);
        }
        sort(values.begin(), values.end());
        for (int i = 0; i < indices.size(); ++i) {
            p[indices[i]] = values[i];
        }
    }

    for (int i = 1; i < p.size(); ++i) {
        if (p[i] < p[i - 1]) {
            return false;
        }
    }

    return true;
}


void solve(){
    
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