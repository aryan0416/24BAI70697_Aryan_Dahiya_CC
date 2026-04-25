#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    if (n == 2) {
        cout << -1 << "\n";
        return;
    }
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << k << " ";
            k += 2;
            if (k > n * n) {
                k = 2;
            }
        }
        cout << "\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}

 // Time Complexity: O(N^2) - We visit each cell of the N x N grid exactly once to print the numbers.
 // Space Complexity: O(1) - Auxiliary space is constant because we print the matrix directly without storing it.
 
