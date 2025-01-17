class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> temp;
        temp.push_back(nums.at(0));

        for (int k = 1; k < nums.size(); k++) {
            if (nums.at(k - 1) == nums.at(k)) {
                continue;
            } else {
                temp.push_back(nums.at(k));
            }
        }

        nums = temp;
        return temp.size();
    }
};
