class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candiate = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (count == 0) {
                candiate = nums[i];
                count = 1;
            }
            else if (nums[i] == candiate) {
                count++;
            }
            else {
                count--;
            }
        }
        // Boyer - Moore Voting Algorithm
        return candiate;
    }
};