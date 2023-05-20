class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          sort (nums.begin (), nums.end ());
        int n = nums.size ();
        set<vector<int>> unique_;
        vector<vector<int>> result;

        for (auto i = 0; i < n; i++)
        {
            int j = i + 1;
            int h = j + 1;
            int k = n - 1;
            while (j < k )
            {
                while (h < n - 2)
                {
                    if (nums[i] + nums[j] + nums[h] + nums[k] == target)
                    {
                        unique_.insert ({nums[i], nums[j], nums[h], nums[k]});
                        h++;
                        j--;
                    }
                    else if (nums[i] + nums[j] + nums[k] < target)
                        h++;
                    else
                        j--;
                }
                
            }
        }  
        for (auto vect : unique_)
            result.push_back(vect);
      return result;
    }
};
