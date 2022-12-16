#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string result = "";
    char tmp;
    if (strs.size() == 0)
        return result;
    for (int i = 0; i < strs[0].size(); i++)
    {
        tmp = strs[0][i];
        for (int j = 0; j < strs.size(); j++)
        {
            if (strs[j][i] != tmp)
                return result;
        }
        result += tmp;
    }
    return result;
}
int main()
{

    vector<string> strs = {"dog", "racecar", "car"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}