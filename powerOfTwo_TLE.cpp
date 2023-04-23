class Solution {
public:
    bool isPowerOfTwo(int n) {
      unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    if (count == 1)
      return true;
    else
      return false;
    }
};
