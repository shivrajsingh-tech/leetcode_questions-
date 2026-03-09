class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prifex =  strs[0];

        for (int i=0; i<strs.size();i++){
        while(strs[i].find(prifex)!=0)
        {
            prifex.pop_back();
        }
    }
    return prifex;
    }
};