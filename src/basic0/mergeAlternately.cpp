#include <iostream>
#include <vector>


using namespace std;

// 2025/9/28 Passed: 0 ms, 8.2 MB
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j =  0;
        string result;

        while (i < word1.size() || j < word2.size())
        {
            if (i < word1.size())
            {
                result.push_back(word1[i]);
                i++;
            }
            if (j < word2.size())
            {
                result.push_back(word2[j]);
                j++;
            }
        }
        return result;
    }
};