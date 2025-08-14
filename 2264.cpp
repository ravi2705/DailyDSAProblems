// 2264. Largest 3-Same-Digit Number in String
class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        for (int i = 2; i < num.length(); i++) {
            if (num[i-2] == num[i-1] && num[i-1] == num[i]) {
                string curr = num.substr(i-2, 3);
                if (curr > ans) {
                    ans = curr;
                }
            }
        }
        return ans;
    }
};
