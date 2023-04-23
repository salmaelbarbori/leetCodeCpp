vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j, toFind;
        while (i < nums.size() - 1)
        {
            j = i + 1;
            toFind = target - nums[i];
            while (j < nums.size())
            {
                if (toFind == nums[j])
                    return {i, j};
                j++;
            }
            i++;
        }
        return {NULL};
 }
