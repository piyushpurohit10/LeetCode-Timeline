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