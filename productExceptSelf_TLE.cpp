class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
       for (auto i = 0; i < nums.size (); i++)
       {
           for (auto j = 0; j < nums.size(); j++)
           {
                if (i != j) 
                    answer[i] *= nums[j];
           }
       } 
       return (answer);
    }
};
