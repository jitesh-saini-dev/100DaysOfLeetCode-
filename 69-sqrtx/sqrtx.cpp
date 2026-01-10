class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        for (int i = 1; i <= x / i; i++) {
            // perfect square check
            if (i == x / i && x % i == 0 || ((i + 1) > x / (i + 1)))
                return i;
        }

        return 0;
    }
};
