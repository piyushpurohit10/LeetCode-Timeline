class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = *max_element(nums.begin(), nums.end());
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }
        int end = sum;
        int mid = start + (end - start) / 2;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int count = 1;
            sum = 0;
            int currentElement = 0;
            for (int i = 0; i < nums.size(); i++) {
                currentElement = nums[i];
                if (sum + currentElement <= mid) {
                    sum = sum + currentElement;
                }
                else {
                    count++;
                    sum = currentElement;
                }
            }
            if (count > k) {
                start = mid + 1;
            }
            else {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};