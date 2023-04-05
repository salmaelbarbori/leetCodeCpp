#include<bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

       string result1 = "", result2 = "";
       for (string s1 : word1)
            result1 = result1 + s1;
       for (string s2 : word2)
            result2 = result2 + s2;
            
        if (result1 == result2)
            return true;
        else
            return false;
    }

int main () {
vector<string> word1 = {"ab", "c"};
vector<string> word2 = {"a", "bc"};

cout<<(arrayStringsAreEqual(word1, word2) ? "true" : "false");
}
