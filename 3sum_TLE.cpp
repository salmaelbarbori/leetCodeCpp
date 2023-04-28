class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size ();
      vector<vector<int>> result;
      for (auto i = 0; i < n - 2; i++)
      {
        for (auto j = i + 1; j < n - 1; j++)
        {
            for (auto k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    sort(temp.begin (), temp.end ());
                    result.push_back(temp);
                }   
            }  
          
        }  
      }  
      sort(result.begin (), result.end ());
      auto iter = unique(result.begin(), result.end());
      result.erase(iter, result.end());

      return result;
    }
};
