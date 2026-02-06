class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        queue<int> q;
        for(int x : nums) q.push(x);


        for(int i = 0; i < n - k; i++) {
            q.push(q.front());
            q.pop();
        }

        for(int i = 0; i < n; i++) {
            nums[i] = q.front();
            q.pop();
        }
    }
};
