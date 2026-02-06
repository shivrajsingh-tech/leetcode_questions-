class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char ,int>m;
       for(auto x:s) {
        m[x]++;
       }
       int val=m[s[0]];
       for(auto x:m){
        if(x.second!=val)return false;
       }
       return true;
    }
};