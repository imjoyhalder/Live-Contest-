#include <iostream>
using namespace std;

void solve() {
    long long k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    long long count = 0;

    // For each x in the range [l1, r1]
    for (long long x = l1; x <= r1; ++x) {
        long long y = x;
        
        // While y is within the range [l2, r2]
        while (y <= r2) {
            // If y is within the range [l2, r2], count it
            if (y >= l2) {
                count++;
            }
            // If multiplying y by k will overflow or exceed r2, break
            if (y > r2 / k) {
                break;
            }
            y *= k;
        }
    }
    
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
