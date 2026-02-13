class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int largest=INT_MIN;
        for(auto x:nums){
            if(x>largest) largest=x;
        }

        for(int i=0 ; i<nums.size();i++){
            if(nums[i] == largest) return i;
        }

        return -1;
        
            }
};