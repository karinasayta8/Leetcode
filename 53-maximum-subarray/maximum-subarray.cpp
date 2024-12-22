class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN; // Maximum sum encountered so far
    int currentSum = 0;   // Current subarray sum

    for (int num : nums) {
        currentSum += num;           // Add current element to the running sum
        maxSum = max(maxSum, currentSum); // Update max sum if current sum is larger
        if (currentSum < 0) {
            currentSum = 0; // Reset current sum if it becomes negative
        }
    }

    return maxSum;
    }
};