class Solution {
public:
    int reverse(int x) {
        int result = 0; // max = 2147483647, min = -2147483648

        while (x != 0) {
            int digit = x % 10;

            if (result > INT32_MAX / 10 || (result == INT32_MAX / 10 && digit > 7))
                return 0;
            if (result < INT32_MIN / 10 || (result == INT32_MIN / 10 && digit < -8))
                return 0;

            result = result * 10 + digit;
            x /= 10;
        }
        return result;
    }
};
