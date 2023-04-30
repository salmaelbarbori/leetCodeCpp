class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;

    for (auto i = 0; i < numRows; i++)
    {
        vector<int> row (i + 1, 1);

        for (auto j = 1; j < i; j++) 
            row[j] = result [i - 1][j] + result[i - 1][j - 1];
        result.push_back (row);      
    }
    return result;
    }
};
