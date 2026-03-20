class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low < high){
            int mid = (low + high) / 2;

            int sum = 0;
            for(int x : nums){
                sum += (x + mid - 1) / mid;
            }

            if(sum > threshold)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};
