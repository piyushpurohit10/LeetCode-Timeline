class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > currentSum + nums[i]) {
            currentSum = nums[i];
        }
        else {
            currentSum = currentSum + nums[i];
        }
        // Instead of the if-else, we can use:
        // currentSum = max(nums[i], currentSum + nums[i]);
        // It chooses between starting a new subarray and continuing the current one.

        // This is also known as Kadane's Algorithm.
        if (currentSum > maxSum) {
            maxSum = currentSum;
            }
        }
     return maxSum;
    }
};