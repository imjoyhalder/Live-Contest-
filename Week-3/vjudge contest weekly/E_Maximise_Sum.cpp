#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        long long max_sum = 0;
        int min_abs_val = INT_MAX;
        int negative_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            max_sum += abs(v[i]);  
            if (v[i] < 0) negative_count++;
            min_abs_val = min(min_abs_val, abs(v[i]));  
        }

      
        if (negative_count % 2 != 0) {
            max_sum -= 2 * min_abs_val;
        }

        cout << max_sum << endl;
    }

    return 0;
}
