class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
    int count = 0;

    // Step 1: Find the candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Return the candidate (majority element guaranteed)
    return candidate;
    }
};