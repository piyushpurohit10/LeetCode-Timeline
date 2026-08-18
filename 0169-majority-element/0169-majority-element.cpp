class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int z = 0;
        sort (nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            z = nums[nums.size()/ 2];
        }
        return z;
    }
};