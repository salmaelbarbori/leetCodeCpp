class Solution {
public:
    int maxArea(vector<int>& height) {
     int n = height.size(), final_max = 0;

     for (auto i = 0; i < n -1; i++) 
     {
        for (auto j = i + 1; j < n; j++)
        {
            if (height[i] >= height[j])
            {
                int max_ = height[j] * (j - i);
                if (max_ > final_max)
                    final_max = max_;
            }
            else if (height[i] < height[j])
            {
                int max_ = height[i] * (j - i);
                if (max_ > final_max)
                    final_max = max_;
            }
            
        }
     }  
     return final_max;
    }
};
