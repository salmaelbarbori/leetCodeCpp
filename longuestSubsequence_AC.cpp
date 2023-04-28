#include<bits/stdc++.h>
using namespace std;

    int lengthOfLongestSubstring(string s) {
        int n = s.length(), i, j, max_, final_result = 0;
      

      if (n == 0) 
        return 0;
      if (s == " " || n == 1)
        return 1;

      for ( i = 0; i < n - 1; i++)
      {
        set<char> unique_;
        max_= 1;
        j = i + 1;
        unique_.insert(s[i]);
        while (!unique_.count(s[j]) & j < n)
        {
            unique_.insert(s[j]);
            j++;
            max_ += 1;
        }
        if (max_ > final_result)
            final_result = max_;
      }
      
      return final_result;
    }

int main () {

}
