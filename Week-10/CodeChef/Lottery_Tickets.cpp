#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int find_winning_numbers(vector<int> &tickets, int chef_ticket) {
    vector<int> sorted_tickets = tickets;
    sort(sorted_tickets.begin(), sorted_tickets.end());

    int position = find(sorted_tickets.begin(), sorted_tickets.end(), chef_ticket) - sorted_tickets.begin();
    int min_X, max_X;

    // Adjust boundaries if Chef's ticket is the first or last one
    if (position == 0) {
        min_X = 1;
    } else {
        min_X = max(1, chef_ticket - (sorted_tickets[position] - sorted_tickets[position - 1]) / 2);
    }

    if (position == sorted_tickets.size() - 1) {
        max_X = 1000000;
    } else {
        max_X = min(1000000, chef_ticket + (sorted_tickets[position + 1] - chef_ticket) / 2);
    }

    return max_X - min_X + 1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        cout << find_winning_numbers(A, A[0]) << endl;
    }

    return 0;
}
