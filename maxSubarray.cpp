class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ = INT_MIN, sum = 0;

        for (auto i = 0; i < nums.size (); i++)
        {
            sum += nums[i];
            max_ = max (max_, sum);
            if (sum < 0 )
                sum = 0;
        }
        return max_;
    }
};
