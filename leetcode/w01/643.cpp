class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        long max = sum;
        for (int i = 1; i <= nums.size() - k; i++) {
            sum += (nums[i + k - 1] - nums[i - 1]);
            max = (sum > max) ? sum : max;
        }
        return (double)max/(double)k;
    }
};
