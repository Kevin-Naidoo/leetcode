class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        auto count = 1;

        if (nums.size() == 1)
            return nums.at(0);

        for (int k = 1; k < nums.size(); k++) {
            if (nums.size() == 1)
                return nums.at(0);
            {
                count += 1;
                if (count > (nums.size() / 2))
                    return nums.at(k);
            }
        }
        return 0;
    }
};
