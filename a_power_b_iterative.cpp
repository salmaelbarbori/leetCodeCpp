#include<bits/stdc++.h>
using namespace std;
int power(int a, int b) {
    int result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
int main () {
int a = 5, b = 5;
cout << power (a, b);
}
