class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> ans;

        for(int i = digits.size() - 1; i >= 0; i--) {

            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        ans.push_back(1);

        for(auto x : digits) {
            ans.push_back(x);
        }

        return ans;
    }
};