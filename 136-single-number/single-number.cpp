class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        // Check if the input array is not empty
        if (nums.empty()) {
            return 0;  // or throw an exception depending on problem constraints
        }
        
        for (int num : nums) {
            result ^= num;  // XOR all numbers
        }
        return result;  // The number that appears only once
    }
};