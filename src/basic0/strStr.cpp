#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/9/28 Brute Force (Passed: 0 ms, 8.36 MB)
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();

        if (n == 0)
        {
            return 0;
        }
        

        for (int i = 0; i <= m - n; i++)
        {
            int j = 0;
            while (j < n && haystack[i + j] == needle[j])
            {
                j++;
            }
            if (j == n)
            {
                return i;
            }
            
        }

        return -1;
    }
};