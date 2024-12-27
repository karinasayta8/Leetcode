class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0) return 0;

        // step 1: "sort an array"
        int last_smallest=INT_MIN, count=0, longest=1;
        sort(nums.begin(),nums.end());
        
    
        for(int i=0; i<nums.size();i++){
            if(nums[i]-1==last_smallest){
                count += 1;
                last_smallest=nums[i];
            }
            else if(last_smallest != nums[i]){
                count=1;
                last_smallest=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};