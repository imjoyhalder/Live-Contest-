#include <iostream>
#include <string>
using namespace std;

// Function to count occurrences of 'a' and 'b' in a string
pair<int, int> countAB(const string& str) {
    int countA = 0, countB = 0;
    for (char c : str) {
        if (c == 'a') countA++;
        else if (c == 'b') countB++;
    }
    return {countA, countB};
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        string S, T;
        cin >> S >> T;

        // Count occurrences of 'a' and 'b' in both strings
        auto countA_S = countAB(S).first; 
        auto countB_S = countAB(S).second; 

        auto countA_T = countAB(T).first; 
        auto countB_T = countAB(T).second; 
        

        // Check if the transformation is possible
        if (countB_S != countB_T) {
            cout << "No" << endl;
        } else {
            // Check length condition
            if (countA_S <= countA_T + (M - N) / 2 && countA_T <= countA_S + (N - M) / 2) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
