        sort (nums.begin (), nums.end ());
        int n = nums.size ();
        set<vector<int>> unique_;
        vector<vector<int>> result;

        for (auto i = 0; i < n; i++)
        {
            int j = i + 1;
            int k = n - 1;
            while (j < k )
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    unique_.insert ({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (nums[i] + nums[j] + nums[k] < 0)
                    j++;
                else
                    k--;
            }
        }  
        for (auto vect : unique_)
            result.push_back(vect);
      return result;
    }
