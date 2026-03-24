class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for (auto x : operations) {
            if (x == "C") {
                s.pop();
            }
            else if (x == "D") {
                s.push(s.top() * 2);
            }
            else if (x == "+") {
                int value1 = s.top();
                s.pop();
                int value2 = s.top();
                s.push(value1);             
                s.push(value1 + value2);    
            }
            else{
                s.push(stoi(x));
            }
        }

        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};