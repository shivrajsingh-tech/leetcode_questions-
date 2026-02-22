class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
    map<char,int>m1;
    for(auto x:s)m1[x]++;
    for(auto x:t)m1[x]--;
   for(auto x:m1){
    if(x.second!=0){
        return false;
    }
   }
   return true;
    }
};