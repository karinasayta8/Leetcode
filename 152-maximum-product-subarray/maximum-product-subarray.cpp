class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int n = nums.size();
        int leftProduct = 1, rightProduct = 1, maxProduct = nums[0];

        for (int i = 0; i < n; i++) {
            // Calculate product from the left
            leftProduct = (leftProduct == 0) ? nums[i] : leftProduct * nums[i];
            // Calculate product from the right
            rightProduct = (rightProduct == 0) ? nums[n - i - 1] : rightProduct * nums[n - i - 1];
            // Update the maximum product
            maxProduct = max(maxProduct, max(leftProduct, rightProduct));
        }

        return maxProduct;
    }
};