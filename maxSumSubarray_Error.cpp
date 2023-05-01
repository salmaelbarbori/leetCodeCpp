class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       vector<vector<int>> result;
        int max_ = 0, sum, s, max__ = 0;

        for (auto i = 0; i < nums.size () - 1; i++)
        {
            sum = nums[i];
            for (auto j = i + 1; j < nums.size (); j++)
            {
                vector<int> vect_;
                sum += nums[j];
                if (sum > max_)
                {
                    max_ = sum;
                    vect_.push_back (nums.begin () + i, nums.begin () + j);
                }
            }
            result.push_back (vect_);
        }
        vector<vector<int>> result_;
    //the max of all subArrays
    for (auto i = result.begin (); i != result.end (); ++i)
    {
        s = accumulate(i.begin (), i.end (), 0);
        if (s > max__)
        {
            max__= s;
            result_.push_back (i);
        }
    }
    return result_; 
    }
};
