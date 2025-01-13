class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        if (low > high) {
            return -1; // Base case: target not found
        }

        int mid = low + (high - low) / 2; // Avoid overflow
        
        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            return binarySearch(nums, mid + 1, high, target); // Search in the right half
        } else {
            return binarySearch(nums, low, mid - 1, target); // Search in the left half
        }
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};