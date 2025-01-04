#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

vector<vector<int>> construct_even_grid(int n) {
    vector<vector<int>> grid(n, vector<int>(n, 0));
    int num = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            grid[i][j] = num;
            num++;
            if (num > n) {
                num = 1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 1) {
            reverse(grid[i].begin(), grid[i].end());
        }
    }
    return grid;
}

void print_grid(const vector<vector<int>>& grid) {
    for (const auto& row : grid) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << nl;
    }
}

int main() {
    int n = 4; 
    auto grid = construct_even_grid(n);
    print_grid(grid);
    return 0;
}
