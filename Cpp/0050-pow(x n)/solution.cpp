class Solution {
public:
    double myPow(double x, int n) {
        // Initialize the result variable to 1
        double ans = 1;

        // Convert n to a long long to handle the edge case when n is INT_MIN
        long long m = n;

        // If n is negative, make it positive and keep track of it
        if (n < 0) {
            m = (-1) * m;
        }

        // Main loop for exponentiation
        while (m > 0) {
            // If m is odd, multiply the result by x and decrement m by 1
            if (m % 2 == 1) {
                ans = ans * x;
                m -= 1;
            }
            // If m is even, square x and divide m by 2
            else {
                x = x * x;
                m = m / 2;
            }
        }

        // If n was originally negative, return the reciprocal of ans, otherwise, return ans
        return (n < 0) ? 1 / ans : ans;
    }
};
