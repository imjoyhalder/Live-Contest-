#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
vector<int> tree[MAXN];
int subsize[MAXN];

// Function to calculate the size of each subtree
void calculateSubtreeSizes(int node, int parent) {
    subsize[node] = 1;
    for (int child : tree[node]) {
        if (child != parent) {
            calculateSubtreeSizes(child, node);
            subsize[node] += subsize[child];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Clear the tree for the new test case
        for (int i = 1; i <= n; ++i) {
            tree[i].clear();
        }

        // Read the edges of the tree
        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        // Calculate subtree sizes starting from node 1
        calculateSubtreeSizes(1, -1);

        // Find the maximum number of connected components after removing two vertices
        int maxComponents = 0;
        for (int u = 1; u <= n; ++u) {
            for (int v : tree[u]) {
                if (subsize[v] > subsize[u]) continue; // Ensure we only consider edges in one direction

                int components = 2; // Two parts are created by removing two nodes
                maxComponents = max(maxComponents, components);
            }
        }

        cout << maxComponents << '\n';
    }

    return 0;
}
