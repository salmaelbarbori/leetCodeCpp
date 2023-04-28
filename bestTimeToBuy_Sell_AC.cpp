class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       vector<int> diff (n, 0);
       int max_ = 0, i;
      diff[n - 1] = prices[n - 1];
       for (i = n - 2; i >= 0; i--)
       {
        diff[i] = max (diff[i + 1], prices[i]);
       } 
      for (i = 0; i < n; i++)
        max_ = max (max_, (diff[i] - prices[i]));
       return max_;
    }
};
