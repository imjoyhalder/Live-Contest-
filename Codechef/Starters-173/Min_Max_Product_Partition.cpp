#include <bits/stdc++.h>
using namespace std;

bool isValidSeating(vector<int>& P) {
    int N = P.size();
    set<int> occupied;
    
    for (int i = 0; i < N; i++) {
        int person = P[i];

        // If there are no occupied seats, person sits anywhere
        if (occupied.empty()) {
            occupied.insert(person);
            continue;
        }

        // Calculate the maximum minimum distance
        int maxMinDist = 0;
        for (int seat : occupied) {
            maxMinDist = max(maxMinDist, abs(person - seat));
        }

        // Try to seat the person while following the rules
        bool canSeat = false;
        for (int seat : occupied) {
            if (abs(person - seat) == maxMinDist) {
                canSeat = true;
                break;
            }
        }

        if (!canSeat) return false;
        occupied.insert(person);
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        if (isValidSeating(P)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
