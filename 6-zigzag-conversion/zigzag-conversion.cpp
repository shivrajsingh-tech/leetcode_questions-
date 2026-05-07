class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1 || numRows >= s.length()) {
            return s;
        }
        vector<string> zigzag(numRows);

        int row = 0;
        bool down = true;

        for(int i = 0; i < s.length(); i++) {

            zigzag[row] += s[i];

            if(down) {
                row++;
            }
            else {
                row--;
            }

            if(row == numRows - 1) {
                down = false;
            }

            if(row == 0) {
                down = true;
            }
        }

        string ans = "";
        
        for(int i = 0; i < numRows; i++) {
            ans += zigzag[i];
        }

        return ans;
    }
};