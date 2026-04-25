#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int count1 = 0;
        int max_diff = -1;
        int curr_diff = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x == 1) {
                count1++;
                curr_diff--;
            } else {
                curr_diff++;
            }
            if (curr_diff < 0) {
                curr_diff = 0;
            }
            max_diff = max(max_diff, curr_diff);
        }
        if (count1 == n) {
            cout << n - 1 << "\n";
        } else {
            cout << count1 + max_diff << "\n";
        }
    }
    return 0;
}
