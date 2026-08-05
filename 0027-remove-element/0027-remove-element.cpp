class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                    nums[j] = nums[i];
                    j++;
                }
        }
        return j;
    }
};

// Notes 

/*
Two Pointer Pattern (Reader-Writer)

i -> Reads every element.

j -> Points to the next position where
     a valid element should be written.

Algorithm:
1. Traverse with i.
2. If current element is valid:
      nums[j] = nums[i];
      j++;
3. Return j.

Never think of deleting elements.
Think of rewriting the array.
*/
