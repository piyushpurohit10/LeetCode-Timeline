class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0; 
        int product = 1;

        while (n > 0) {
            int digit = n % 10;
            n = n / 10;
            sum = sum + digit;
            product = product * digit;
        }
         if (m % (sum + product) == 0) {
                return true;
            }
            else {
                return false;
            }
    }
};