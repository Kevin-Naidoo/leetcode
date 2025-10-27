class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Calculate the sum of the first k elements
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }

        int maxSum = sum;

        // Slide the window through the array
        for (int i = k; i < nums.size(); ++i) {
            sum += nums[i] - nums[i - k]; // Add new element, remove old one
            maxSum = max(maxSum, sum);
        }

        // Return the maximum average
        return static_cast<double>(maxSum) / k;
    }
};
