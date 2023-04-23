#include<bits/stdc++.h>
using namespace std;

vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}
int main () {
    string s2 = "2019-06-30", s1 = "2019-06-29";
    vector<string> r1 = split (s1, '-');
    vector<string> r2 = split (s2, '-');

    int a1 = stoi(r1[0]), b1 = stoi(r1[1]), c1 = stoi(r1[2]);
    int a2 = stoi(r2[0]), b2 = stoi(r2[1]), c2 = stoi(r2[2]);
    cout << ((a2- a1)*365 + (b2 - b1)*30 + (c2 - c1)) << endl; 
    return 0;

}
