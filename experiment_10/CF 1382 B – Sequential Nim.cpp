
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ones = 0;
    bool all_ones = true;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1 && all_ones) {
            ones++;
        } else {
            all_ones = false;
        }
    }
    
    if (ones == n) {
        if (n % 2 == 1) cout << "First\n";
        else cout << "Second\n";
    } else {
        if (ones % 2 == 0) cout << "First\n";
        else cout << "Second\n";
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


 //Time Complexity: O(N) - We process the entire sequence of numbers once per testcase. Total time over all testcases is O(Sum of N).
 //Space Complexity: O(N) - An array of size N is used per testcase (can be optimized to O(1) if inputs are processed on the fly without storing).
 
