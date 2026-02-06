class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0 && (i == 0 || nums[i] != nums[i - 1])) {
                count++;
            }
        }
        return count;
    }
};
