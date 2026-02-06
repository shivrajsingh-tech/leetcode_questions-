class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int end =nums.size();
       return nums[nums.size()-k];
    }
};