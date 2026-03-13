class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0 , count2 = 0;
        int i=0;
        for(auto x: nums){
            if(x==0){
                count0++;
            }
            else if(x==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        while (count0!=0) {
            nums[i]=0;
            i++;
            count0--;
        }
        while (count1!=0) {
            nums[i]=1;
            i++;
            count1--;
        }
        while (count2!=0) {
            nums[i]=2;
            i++;
            count2--;
        }
    }
};
