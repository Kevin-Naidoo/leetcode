class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int total = 0;

        for (int num : nums) {
            int complement = k - num;
            if (freq[complement] > 0) {
                total++;
                freq[complement]--;
            } else {
                freq[num]++;
            }
        }

        return total;
    }
};
