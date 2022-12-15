// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    int i, j;
    vector<int> R;
    for (i = 0; i < nums.size(); i++)
    {
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                R.push_back(i);
                R.push_back(j);
                return R;
            }
        }
    }
    return R;
}
int main()
{
    // Write C++ code here
    vector<int> T1{3, 3};
    vector<int> R = twoSum(T1, 6);
    cout << R[0] << "" << R[1] << endl;

    return 0;
}