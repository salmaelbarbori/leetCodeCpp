#include<bits/stdc++.h>
using namespace std;
int power(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    int temp = power (a, b/ 2);
    int result = temp * temp;
    if (b % 2 == 1) result = result * a;
    return result;
}
int main () {
int a = 5, b = 6;
cout << power (a, b);
}
