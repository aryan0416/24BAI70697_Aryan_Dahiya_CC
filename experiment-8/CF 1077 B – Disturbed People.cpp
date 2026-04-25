#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1) {
                ans++;
                a[i + 1] = 0;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
//Time Complexity: O(N) - A single pass through the array to check conditions and apply greedy changes.
//Space Complexity: O(N) - An array of size N is stored.
