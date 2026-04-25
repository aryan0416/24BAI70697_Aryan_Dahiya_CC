#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_seen(256, -1);
        int max_len = 0;
        int start = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            if (last_seen[s[i]] >= start) {
                start = last_seen[s[i]] + 1;
            }
            last_seen[s[i]] = i;
            max_len = max(max_len, i - start + 1);
        }
        return max_len;
    }
};
 //Time Complexity: O(N) - Where N is the length of the string. The 'start' and 'i' pointers traverse the string sequentially.
 //Space Complexity: O(1) - The vector 'last_seen' uses a fixed size of 256 regardless of the input string length.
