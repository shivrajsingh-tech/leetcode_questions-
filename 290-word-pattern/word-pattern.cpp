class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";

        for (auto x : s) {
            if (x == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += x;
            }
        }
        words.push_back(temp);

        if (pattern.size() != words.size())
            return false;

        unordered_map<char, int> charr;
        unordered_map<string, int> wordd;

        for (int i = 0; i < pattern.size(); i++) {
            if (charr[pattern[i]] !=wordd[words[i]])
                return false;
            charr[pattern[i]] = i + 1;
            wordd[words[i]] = i + 1;
        }
        return true;
    }
};
