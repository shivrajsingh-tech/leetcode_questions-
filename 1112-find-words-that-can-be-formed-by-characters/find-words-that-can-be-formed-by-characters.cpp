class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        vector<int> count(26, 0);

        for(char ch : chars){
            count[ch - 'a']++;
        }

        int ans = 0;

        for(int i = 0; i < words.size(); i++){

            vector<int> temp(26, 0);
            bool check = true;


            for(char ch : words[i]){

                temp[ch - 'a']++;

                if(temp[ch - 'a'] > count[ch - 'a']){
                    check = false;
                    break;
                }
            }

            if(check){
                ans += words[i].size();
            }
        }

        return ans;
    }
};