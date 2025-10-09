#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/10/8
// Intuitive Solution(Passed:0 ms, 12.51 MB)
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size() == 2)
        {
            return true;
        }
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];

        for (int i = 1; i < arr.size() - 1; i++)
        {
            if ((arr[i + 1] - arr[i]) != diff)
            {
                return false;
            }   
        }
        return true;
    }
};