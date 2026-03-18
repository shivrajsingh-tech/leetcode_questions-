class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            int j =i+1;
            int m =n-1;
            while(j<m){
                int sum=nums[i]+nums[j]+nums[m];
                if(sum<0) {
                    j++;
                }
                else if(sum>0)
                {
                    m--;
                }
                else{
                   
                    ans.push_back({nums[i],nums[j],nums[m]});
                    j++ , m--;
                    while(j<m&&nums[j]==nums[j-1])j++;
            
                }
            }
        }
        return ans;
    }
};
