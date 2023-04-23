#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBits (unsigned int n) {
   if (n == 0)
    return 0;
   while (n != 1)
   {
    if (n % 2 != 0)
        return 0;
    n = n / 2;
   }
   return 1;
}
int main () {
    unsigned int c;
    c = countSetBits (1);
    if (c == 1)
        cout << "True" << endl;
    else
        cout << "False"<< endl;
}
