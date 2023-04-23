#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 0, target;
    cin >> n >> target;
    int a[n];
    while (i < n)
    {
         cin >> a[i];
         i++;
    }   
    for (i = 0; i < n - 1; i++)
    {
        for(auto j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << i << j << endl;
                return 1;
            }    
        }
    }
    cout << "not found" <<endl;
    return 0;
    
}
