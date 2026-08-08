class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        
        while (left < right) {
            int current_sum = numbers[left] + numbers[right];
            
            if (current_sum == target) {
                // The problem requires 1-indexed array, so we add 1 to the indices
                return {left + 1, right + 1};
            } else if (current_sum < target) {
                left++; // We need a larger sum
            } else {
                right--; // We need a smaller sum
            }
        }
        
        return {}; // Default return, though the problem states exactly one solution exists
    }
};