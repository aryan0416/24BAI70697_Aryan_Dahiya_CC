
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long L = min(a, b);
        long long R = (long long)n * L;
        long long lcm_ab = (a / std::gcd(a, b)) * b;
        long long mod = 1e9 + 7;
        
        while (L < R) {
            long long mid = L + (R - L) / 2;
            long long count = mid / a + mid / b - mid / lcm_ab;
            if (count < n) {
                L = mid + 1;
            } else {
                R = mid;
            }
        }
        return L % mod;
    }
};

 // Time Complexity: O(log(N * min(A, B))) - Binary search over the answer space. The search space is bounded by N * min(A, B).
 // Space Complexity: O(1) - Only primitive data types are used.
