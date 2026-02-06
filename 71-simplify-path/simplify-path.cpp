class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string token;
        
        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (token == "..") {
                    if (!st.empty()) st.pop();
                } 
                else if (token != "" && token != ".") {
                    st.push(token);
                }
                token = "";
            } else {
                token += path[i];
            }
        }

        string res = "";
        while (!st.empty()) {
            res = "/" + st.top() + res;
            st.pop();
        }

        return res.empty() ? "/" : res;
    }
};
