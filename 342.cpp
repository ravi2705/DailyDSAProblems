// 342. Power of Four

class Solution {
public:
    bool isPowerOfFour(int n) {
        double k = n;
        while (k > 1) {
            k = k / 4;
        }
        if (k == 1) {
            return true;
        } else {
            return false;
        }
    }
};