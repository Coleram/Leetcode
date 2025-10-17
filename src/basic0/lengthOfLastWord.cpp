#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/10/16
// Intuitive Solution(Passed:0 ms, 8.70 MB)
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        while (!s.empty() && s.back() == ' ')
        {
            s.pop_back();
        }
        
        int i = 0;
        while (!s.empty() && s.back() != ' ') {
            s.pop_back();
            i++;
        }
        
        return i;
    }
};