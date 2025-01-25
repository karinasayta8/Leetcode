class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0, high=nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;

            if ((mid == 0 || nums[mid] > nums[mid - 1]) && 
                (mid == nums.size() - 1 || nums[mid] > nums[mid + 1])) {
                return mid;
            }

            // If the element on the right is greater, move right
            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            } 
            // If the element on the left is greater, move left
            else {
                high = mid - 1;
            }
        }
        
        return -1;
        
    }
};