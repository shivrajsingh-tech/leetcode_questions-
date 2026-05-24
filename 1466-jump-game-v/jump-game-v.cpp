class Solution {
public:
    
    int dfs(int i, vector<int>& arr, int d, vector<int>& dp) {
        
        if(dp[i] != 0) {
            return dp[i];
        }

        int maxi = 1;

        for(int j = i - 1; j >= i - d && j >= 0; j--) {
            
            if(arr[j] >= arr[i]) {
                break;
            }

            maxi = max(maxi, 1 + dfs(j, arr, d, dp));
        }

        for(int j = i + 1; j <= i + d && j < arr.size(); j++) {
            
            if(arr[j] >= arr[i]) {
                break;
            }

            maxi = max(maxi, 1 + dfs(j, arr, d, dp));
        }

        return dp[i] = maxi;
    }

    int maxJumps(vector<int>& arr, int d) {
        
        int n = arr.size();

        vector<int> dp(n, 0);

        int ans = 1;

        for(int i = 0; i < n; i++) {
            ans = max(ans, dfs(i, arr, d, dp));
        }

        return ans;
    }
};