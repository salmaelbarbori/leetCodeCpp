class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          sort (nums.begin (), nums.end ());
        int n = nums.size ();
        set<vector<int>> unique_;
        vector<vector<int>> result;

        for (auto i = 0; i < n - 3; i++)
        {
            for (auto j = i + 1; j < n - 2; j++)
            {
                long long newTarget= (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j + 1;
                int high = n - 1;

                while (low < high)
                {
                    if (nums[low] + nums[high] < newTarget)
                        low++;
                    else if (nums[low]  + nums[high] > newTarget)
                        high--;
                    else
                    {
                        unique_.insert ({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }  
        for (auto vect : unique_)
            result.push_back(vect);
      return result;
    }
};
