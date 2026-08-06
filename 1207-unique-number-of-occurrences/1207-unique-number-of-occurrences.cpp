class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        vector<int> freq;

        int count = 1;

        for (int i = 0; i + 1 < arr.size(); i++) {

            if (arr[i] == arr[i + 1]) {
                count++;
            }
            else {
                freq.push_back(count);
                count = 1;
            }
        }

        // Store frequency of last group
        freq.push_back(count);

        sort(freq.begin(), freq.end());

        for (int i = 0; i + 1 < freq.size(); i++) {

            if (freq[i] == freq[i + 1]) {
                return false;
            }
        }

        return true;
    }
};


/*
==================== MISTAKE NOTES ====================

1. Bubble Sort:
   - Forgot Bubble Sort needs (n-1) passes.
   - Inner loop should run till (n-pass-1).

2. Indexing:
   - Whenever using arr[i+1], always check:
     i + 1 < size
   - Prevents out-of-bounds access.

3. Frequency Counting:
   - Compare adjacent elements.
   - If equal -> count++.
   - Else -> store count and reset count = 1.

4. Last Group:
   - Don't forget to push the last count after the loop.
   - (No next element exists to trigger else.)

5. Store Frequency:
   - Store 'count', NOT the array.
   - Wrong: freq.push_back(arr);
   - Correct: freq.push_back(count);

6. count is an int:
   - Wrong: count[n-1]
   - Correct: count

7. Return Logic:
   - Duplicate frequencies -> return false.
   - Loop completes -> return true.

8. Compiler Errors:
   - Compiler error != Algorithm error.
   - First check syntax (semicolon, braces, return).

9. Biggest Lesson:
   - DRY RUN before debugging.
   - Every time I use i+1, immediately ask:
     "Can this go out of bounds?"

// 10. Never assume my algorithm is wrong because of one compiler error.
//     Read the error message carefully first.

=======================================================
*/