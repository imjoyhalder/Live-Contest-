#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int compute_streak(const vector<int>& arr) {
    int max_streak = 1, current_streak = 1;
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] >= arr[i - 1]) {
            current_streak++;
            max_streak = max(max_streak, current_streak);
        } else {
            current_streak = 1;
        }
    }
    return max_streak;
}


int max_streak_value(int N, int X, vector<int>& A) {
    int initial_streak = compute_streak(A);
    int max_streak = initial_streak;
    
    for (int i = 0; i < N; i++) {
        int original_value = A[i];
        A[i] = original_value * X;
        max_streak = max(max_streak, compute_streak(A));
        A[i] = original_value; 
    }
    
    return max_streak;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << max_streak_value(N, X, A) << endl;
    }
    return 0;
}
