class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }

    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }

    bool isPowerOfFive(int n) {
        if (n <= 0) return false;
        while (n % 5 == 0) {
            n /= 5;
        }
        return n == 1;
    }

    bool isUgly(int n) {
        if (n <= 0) return false;

        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        return n == 1;
    }
};
