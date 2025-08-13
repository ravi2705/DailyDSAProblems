// 326. Power of Three
class Solution {
public:
    bool isPowerOfThree(int n) {
        double k = n;
        while(k > 1){
            k = k/3;
        }
        if(k == 1){
            return true;
        }else{
            return false;
        }
    }
};