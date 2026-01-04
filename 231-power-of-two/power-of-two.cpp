class Solution {
public:
    bool isPowerOfTwo(int n) {

        int a = 2;
        if (n <= 0) {
            return false;
        }
        while (n % a == 0) {
            n /= a;
        }
        if (n == 1) {
            return true;
        } else
            return false;
    }
};