#include<bits/stdc++.h>
using namespace std;

void find_cool_subsequence(int n, vector<int>& arr) {
    unordered_set<int> seen;

    for (int num : arr) {
        if (seen.count(num)) {
            cout << 1 << endl;
            cout << num << endl;
            return;
        }
        seen.insert(num);
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        find_cool_subsequence(n, arr);
    }

    return 0;
}
