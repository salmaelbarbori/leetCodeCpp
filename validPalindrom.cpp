
string removeInprintableChars (string s) {
    int len = s.length();
    int i =0;
    while (i < len)
    {
        if (!isalnum(s[i]) || s[i] == ' ')
        {
            s.erase(i, 1);
            len--;
        }  
        else
            i++;
             
    }
    return s;
}

bool isPalindrome(string s) {
    s = removeInprintableChars(s);
    for (auto& x : s) {
        x = tolower(x);
    }
    int n = s.length();
    for (auto i = 0, j  = n - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return 0;
    }
    return 1;
    } 
