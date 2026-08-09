#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSum(std::vector<int>& nums) {
        int max_sum = -1;
        // Array to store the largest number encountered for each max digit (0-9)
        std::vector<int> max_val(10, -1); 
        
        for (int num : nums) {
            int max_digit = 0;
            int temp = num;
            
            // 1. Find the maximum digit of the current number
            while (temp > 0) {
                max_digit = std::max(max_digit, temp % 10);
                temp /= 10;
            }
            
            // 2. If we have already seen a number with this same max digit, 
            // calculate their sum and update max_sum if it's larger.
            if (max_val[max_digit] != -1) {
                max_sum = std::max(max_sum, num + max_val[max_digit]);
            }
            
            // 3. Update the tracking array with the highest number for this max digit
            max_val[max_digit] = std::max(max_val[max_digit], num);
        }
        
        return max_sum;
    }
};