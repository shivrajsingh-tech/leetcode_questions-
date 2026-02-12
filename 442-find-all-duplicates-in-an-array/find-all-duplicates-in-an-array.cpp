class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int>s;
        vector<int> ans;

        for (int x : nums) {
            if (s.count(x)) {
                ans.push_back(x);
            } else {
                s.insert(x);
            }
        }
        return ans;
    }

};