#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getCyclicShift(const vector<int>& B, int shift) {
    vector<int> shifted(B.begin() + shift, B.end());
    shifted.insert(shifted.end(), B.begin(), B.begin() + shift);
    return shifted;
}

vector<int> findLexMinArray(int N, int M, vector<int>& A, vector<int>& B) {
    vector<int> minA = A;
    for (int i = 0; i <= N - M; ++i) {
        vector<int> currentA = A;
        for (int shift = 0; shift < M; ++shift) {
            vector<int> shiftedB = getCyclicShift(B, shift);
            copy(shiftedB.begin(), shiftedB.end(), currentA.begin() + i);
            if (currentA < minA) {
                minA = currentA;
            }
        }
    }
    return minA;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N), B(M);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < M; ++i) cin >> B[i];
        vector<int> result = findLexMinArray(N, M, A, B);
        for (int i = 0; i < N; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}