class Solution {
public:
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        const int MOD = 1e9 + 7;

        vector<vector<int>> adj(n + 1);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        queue<int> q;
        vector<int> vis(n + 1, 0);

        q.push(1);
        vis[1] = 1;

        int depth = -1;

        while (!q.empty()) {
            int size = q.size();
            depth++;

            while (size--) {
                int node = q.front();
                q.pop();

                for (int next : adj[node]) {
                    if (!vis[next]) {
                        vis[next] = 1;
                        q.push(next);
                    }
                }
            }
        }

        long long ans = 1;

        for (int i = 0; i < depth - 1; i++) {
            ans = (ans * 2) % MOD;
        }

        return ans;
    }
};