class Solution {
public:
    int maxArea(vector<int>& height) {
     int n = height.size(), final_max = 0, i = 0, j = n - 1;

     while (i < j) 
     {
            if (height[i] <= height[j])
            {
                int max_ = height[i] * (j - i);
                if (max_ > final_max)
                    final_max = max_;
                i++;
            }
            else
            {
                int max_ = height[j] * (j - i);
                if (max_ > final_max)
                    final_max = max_;
                j--;
            }
        
     }  
     return final_max;
    }
};
