class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Sort the array to ensure it's in increasing order
        std::sort(nums.begin(), nums.end());
        
        int left = 0;
        int right = nums.size();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == mid) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
};

