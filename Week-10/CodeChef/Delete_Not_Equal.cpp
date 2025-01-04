#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to compute the results
vector<int> min_final_length(int t, vector<pair<int, string>> &test_cases) {
    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first;
        string s = test_cases[i].second;

        // Check if the string contains both '0' and '1'
        if (s.find('0') != string::npos && s.find('1') != string::npos) {
            results.push_back(1);
        } else {
            results.push_back(n);
        }
    }
    return results;
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, string>> test_cases;
    for (int i = 0; i < t; ++i) {
        int n;
        string s;
        cin >> n >> s;
        test_cases.push_back(make_pair(n, s));
    }

    // Compute results
    vector<int> results = min_final_length(t, test_cases);

    // Print results
    for (int res : results) {
        cout << res << endl;
    }

    return 0;
}
