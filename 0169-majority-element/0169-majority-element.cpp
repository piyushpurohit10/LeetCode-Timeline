class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candiate = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (candiate == nums[i]) {
                count++;
            }
            else if (candiate != nums[i]) {
                count--;
            }
            if (count == 0) {
                candiate = nums[i];
                count = 1;
            }
        }
        return candiate;
    }
};