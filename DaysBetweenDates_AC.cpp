#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
int days_from_civil(int  y, unsigned m, unsigned d) noexcept
{
    y -= m <= 2;
    const int era = (y >= 0 ? y : y-399) / 400;
    const unsigned yoe = static_cast<unsigned>(y - era * 400);      
    const unsigned doy = (153*(m > 2 ? m-3 : m+9) + 2)/5 + d-1;  
    const unsigned doe = yoe * 365 + yoe/4 - yoe/100 + doy;        
    return era * 146097 + static_cast<int>(doe) - 719468;
}
int daysBetweenDates(string date1, string date2) {
    int Y1 = stoi(date1.substr(0, 4));
    int M1 = stoi(date1.substr(5, 2));
    int D1 = stoi(date1.substr(8, 2));
    int Y2 = stoi(date2.substr(0, 4));
    int M2 = stoi(date2.substr(5, 2));
    int D2 = stoi(date2.substr(8, 2));

    int result = abs((days_from_civil(Y1, M1, D1) - days_from_civil(Y2, M2, D2)));    
    return result;
    }
};
