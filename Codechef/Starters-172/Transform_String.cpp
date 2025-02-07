#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto val: v) cout<<val<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void process() {
    string str1, str2;
    cin >> str1 >> str2;

    int len1 = str1.size(), len2 = str2.size();
    vector<int> positions;

    int idx2 = len2 - 1;
    for (int idx1 = len1 - 1; idx1 >= 0; idx1--) {
        if (idx2 >= 0 && str1[idx1] == str2[idx2]) {
            positions.push_back(idx1 + 1); 
            idx2--;
        }
    }
    
    if (idx2 >= 0) { 
        cout << -1 << "\n";
        return;
    }

    reverse(positions.begin(), positions.end()); 

    ll total_positions = accumulate(positions.begin(), positions.end(), 0LL);
    ll total_cost = (ll)len2 * len1 + len1 - len2 - ((ll)len2 * (len2 - 1) / 2) - total_positions;

    cout << total_cost << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int test_cases; cin>>test_cases; 
    while(test_cases--){
        process(); 
    }
       
    return 0;
}
