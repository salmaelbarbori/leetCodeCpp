#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string gender;
    int counter = 0;
    cin >> gender;
    sort(gender.begin(), gender.end());
    for (auto i = 0; i < gender.length(); i++)
    {
        if (gender[i] != gender[i + 1])
            counter += 1;
    }
    if (counter % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}