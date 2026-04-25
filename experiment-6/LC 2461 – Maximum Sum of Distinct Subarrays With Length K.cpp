#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        long long current_sum = 0;
        long long max_sum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            current_sum += nums[i];
            counts[nums[i]]++;
            
            if (i >= k) {
                current_sum -= nums[i - k];
                counts[nums[i - k]]--;
                if (counts[nums[i - k]] == 0) {
                    counts.erase(nums[i - k]);
                }
            }
            
            if (i >= k - 1 && counts.size() == k) {
                max_sum = max(max_sum, current_sum);
            }
        }
        return max_sum;
    }
};


// Time Complexity: O(N) - Sliding window approaches the array. Each element is added and removed from the hash map at most once.
// Space Complexity: O(K) - The hash map stores at most K distinct elements at any given time.
