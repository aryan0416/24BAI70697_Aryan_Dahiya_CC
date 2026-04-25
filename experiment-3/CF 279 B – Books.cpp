#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, t;
    if (cin >> n >> t) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int left = 0, ans = 0, current_sum = 0;
        for (int right = 0; right < n; ++right) {
            current_sum += a[right];
            while (current_sum > t) {
                current_sum -= a[left++];
            }
            ans = max(ans, right - left + 1);
        }
        cout << ans << "\n";
    }
    return 0;
}
