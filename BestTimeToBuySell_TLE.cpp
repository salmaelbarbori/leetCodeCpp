#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
       vector<int> diff;
       int max_, i;

        if (prices.size() == 1)
            return 0;
       for (i = 0; i < prices.size() - 1; i++)
       {
        max_ = *max_element (prices.begin() + i, prices.end()) - prices[i];
        diff.push_back (max_);
       } 
       max_ = *max_element (diff.begin (), diff.end());
       return max_;
    }

int main ()
{
    vector<int> prices = {1};
    cout << maxProfit(prices) << endl;
}
