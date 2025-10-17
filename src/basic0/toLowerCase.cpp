#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/10/16
// Intuitive Solution(Passed:0 ms, 8.21 MB)
class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};