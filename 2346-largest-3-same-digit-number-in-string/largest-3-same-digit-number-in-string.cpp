class Solution {
public:
    string largestGoodInteger(string num) {
         string ans="";
        for(int i=0;i<num.size();i++){
            if(num[i]==num[i+1]&&num[i]==num[i+2]){
                string temp="";
                temp+=num[i];
                 temp+=num[i];
                  temp+=num[i];
                if(temp>ans){
                    ans=temp;
                }
            }
            }
            return ans;
    }
};