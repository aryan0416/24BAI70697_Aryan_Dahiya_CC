
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<vector<int>> adj(n + 1);
        vector<pair<int, int>> edges(n - 1);
        
        for (int i = 0; i < n - 1; ++i) {
            cin >> edges[i].first >> edges[i].second;
            adj[edges[i].first].push_back(i);
            adj[edges[i].second].push_back(i);
        }
        
        vector<int> ans(n - 1, -1);
        int val = 0;
        
        for (int i = 1; i <= n; ++i) {
            if (adj[i].size() >= 3) {
                for (int j = 0; j < 3; ++j) {
                    ans[adj[i][j]] = val++;
                }
                break;
            }
        }
        
        for (int i = 0; i < n - 1; ++i) {
            if (ans[i] == -1) {
                ans[i] = val++;
            }
            cout << ans[i] << "\n";
        }
    }
    return 0;
}

 //Time Complexity: O(N) - We traverse the vertices and edges exactly once to construct the graph and assign values.
 //Space Complexity: O(N) - We store the tree using an adjacency list which takes O(V + E) space, which simplifies to O(N).
