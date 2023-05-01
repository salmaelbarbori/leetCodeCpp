class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    long long sum = 0;
    if (nums.size () == 1)
        return false;

    for (auto i = 0; i < nums.size () - 1; i++)
    {
        sum = nums[i];
        for (auto j = i + 1; j < nums.size (); j++)
        {
            sum += nums[j];
            if (sum % k == 0)
            return true;
        }
    }    
    return false;
    }
};
