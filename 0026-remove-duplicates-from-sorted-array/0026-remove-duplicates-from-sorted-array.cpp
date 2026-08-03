class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int i = 1;
        if (0 == nums.size()) {
            return 0;
        }
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[j]) {

            }
            if (nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};