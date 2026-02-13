class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int subsum=nums[0];
        int sum = nums[0];
        for(int i= 1 ; i<nums.size() ; i++){
            subsum= max(nums[i] , subsum + nums[i]);
            sum = max(subsum , sum);
        }
        return sum;
    }
};