#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/10/8
// Official Solution on Leetcode(Passed:0 ms, 11.25 MB)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            {
                digits[i] += 1;
                for (int j = i + 1; j < digits.size(); j++)
                {
                    digits[j] = 0;
                }
                return digits;
            }
        }
        
        vector<int> ans(digits.size() + 1);
        ans[0] = 1;
        return ans;
    }
};

// 2025/10/8
// Intuitive Solution(Passed:2 ms, 11.27 MB)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.back() += 1;

        for (int i = digits.size() - 1; i >= 1; --i)
        {
            if (digits[i] == 10)
            {
                digits[i] = 0;
                digits[i - 1] += 1;
            }
        }

        if (digits[0] == 10)
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};