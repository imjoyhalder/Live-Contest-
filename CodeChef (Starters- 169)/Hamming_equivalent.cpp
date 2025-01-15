#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(), v.end()
using namespace std;


int countSetBits(int num) {
    return __builtin_popcount(num); 
}

bool isSorted(vector<int> &arr, int n) {

    unordered_map<int, vector<int>> group;
    for (int i = 0; i < n; i++) {
        group[countSetBits(arr[i])].push_back(i);
    }


    for (auto &it : group) {
        vector<int> indices = it.second; 
        vector<int> values;
        for (int idx : indices) {
            values.push_back(arr[idx]);
        }
        sort(all(values)); 
        for (int i = 0; i < indices.size(); i++) {
            arr[indices[i]] = values[i]; 
        }
    }

 
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;

        if (isSorted(arr, n)) {
            cout << "Yes" << nl;
        } else {
            cout << "No" << nl;
        }
    }

    return 0;
}
