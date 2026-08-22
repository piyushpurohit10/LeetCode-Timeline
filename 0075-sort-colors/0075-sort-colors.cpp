class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
       for (int pass = 0; pass < n - 1; pass++) {
    for (int i = 0; i < n - pass - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            swap(nums[i], nums[i + 1]);
        }
    }
} 
    }
};