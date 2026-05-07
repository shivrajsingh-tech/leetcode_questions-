class Solution {
public:
    vector<string> letterCombinations(string digits) {

        if(digits.empty()) {
            return {};
        }

        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans = {""};

        for(char digit : digits) {

            vector<string> temp;

            string letters = mapping[digit - '0'];

            for(string s : ans) {

                for(char ch : letters) {
                    temp.push_back(s + ch);
                }
            }

            ans = temp;
        }

        return ans;
    }
};