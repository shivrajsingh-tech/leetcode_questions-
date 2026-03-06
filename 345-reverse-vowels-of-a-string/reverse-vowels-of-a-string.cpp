class Solution {
public:
    string reverseVowels(string s) {
        string v = "AEIOUaeiou";
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            while (i < j && v.find(s[i]) == -1) {
                i++;
            }

            while (i < j && v.find(s[j]) == -1) {
                j--;
            }

            swap(s[i], s[j]);
            i++;
            j--;
        }

        return s;
    }
};