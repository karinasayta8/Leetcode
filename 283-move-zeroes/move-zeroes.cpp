class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int number = 0;  
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[number] = nums[i];  
            if (number != i) {
                nums[i] = 0;  // Set the current position to zero
            }
            number++;
        }
    }
    int n =nums.size();

        // Print the rotated array
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < n - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    }
};