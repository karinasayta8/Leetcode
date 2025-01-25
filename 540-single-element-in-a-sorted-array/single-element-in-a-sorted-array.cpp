class Solution {
public:
        int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        
        // Edge case: when there's only one element
        if (n == 1) return nums[0];
        
        // If the first element is unique
        if (nums[0] != nums[1]) return nums[0];
        
        // If the last element is unique
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
        
        // Binary search for the single non-duplicate element
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if mid is the unique element
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // If mid is even and nums[mid] is equal to nums[mid + 1], move to the right half
            // If mid is odd and nums[mid] is equal to nums[mid - 1], move to the right half
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return -1; // Return -1 if no unique element is found, although this case won't occur.
    }
};