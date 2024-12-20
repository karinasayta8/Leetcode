class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;

        // Count the number of "drops" (nums[i] > nums[i+1])
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) { // Wrap-around comparison
                count++;
            }
            if (count > 1) return false; // More than one drop means not sorted and rotated
        }

        return true; //
    }
};