class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        auto ctLength = nums.size();
        vector<int> temp(ctLength, 0);
        auto count_ptr = 0;

        for (int x = 0; x < nums.size(); x++) {
            if (nums.at(x) != 0) {
                temp.at(count_ptr) = nums.at(x);

                count_ptr++;
            }
        }
        nums = temp;
    }
};
