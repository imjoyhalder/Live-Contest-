#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> questionsKnown(k);
        unordered_set<int> knownSet;
        for (int i = 0; i < k; ++i) {
            cin >> questionsKnown[i];
            knownSet.insert(questionsKnown[i]);
        }

        string result = "";

        for (int i = 0; i < m; ++i) {
            int l;
            cin >> l; // Number of questions in the i-th list

            vector<int> questions(l);
            bool canPass = true;

            for (int j = 0; j < l; ++j) {
                cin >> questions[j];
                if (knownSet.find(questions[j]) == knownSet.end()) {
                    canPass = false;
                }
            }

            result += (canPass ? '1' : '0');
        }

        cout << result << endl;
    }

    return 0;
}
