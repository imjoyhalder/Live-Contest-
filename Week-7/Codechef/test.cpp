#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Function to calculate f(A)
long long calculateHalloweenValue(const vector<int>& A) {
    int n = A.size();
    long long result = 1;
    const long long LIMIT = 1e9;

    // Compute the pairwise XOR product
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            result *= (A[i] ^ A[j]);
            if (result > LIMIT) {
                return LIMIT + 1; // Early exit if product exceeds L, R bounds
            }
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        long long L, R;
        cin >> N >> L >> R;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long halloweenValue = calculateHalloweenValue(A);

        // Check if value lies within the range [L, R]
        if (halloweenValue >= L && halloweenValue <= R) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
