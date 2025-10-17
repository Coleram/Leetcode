#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/10/16
// Intuitive Solution(Passed:21 ms, 13.22 MB)
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, 
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int val = roman[s[i]];
            if (i + 1 < s.size() && val < roman[s[i + 1]])
            {
                res -= val;
            }else
            {
                res += val;
            }
        }
        return res;
    }
};