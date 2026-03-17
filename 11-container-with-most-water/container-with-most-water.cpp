class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int leftp = 0 , rightp = height.size()-1;
        while (leftp < rightp){
            int width = rightp - leftp;
            int ht = min(height[leftp] , height[rightp]);
            int currentwater = width * ht;
            maxwater=max(currentwater , maxwater);
            height[ leftp ]<height[ rightp ] ? leftp++ : rightp--;
        }
        return maxwater;
    }
};