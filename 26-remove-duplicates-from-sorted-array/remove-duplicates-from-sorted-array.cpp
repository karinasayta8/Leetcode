class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0; // Handle empty array
    
    int count = 1; // Unique element count (array starts with at least one unique element)
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[count - 1]) { // Compare with the last unique element
            nums[count] = nums[i]; // Place the next unique element
            count++; // Increment count
        }
    }
    
    // Fill the rest of the array with placeholder values (e.g., `_` or -1)
    for (int i = count; i < nums.size(); i++) {
        nums[i] = -1; // Using `-1` as a placeholder
    }
    
    return count;
    }
};