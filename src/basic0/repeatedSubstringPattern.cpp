#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/9/30 Brute Force (Failed, out of time)
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if (s.length() <= 1)
        {
            return false;
        }

        int lengthS = s.length();
        for (int i = 1; i <= lengthS / 2; i++)
        {
            if (lengthS % i == 0)
            {
                string substring = s.substr(0, i);
                string tmp = "";
                int repeat = lengthS / i;
                for (int j = 0; j < repeat; i++)
                {
                    tmp += substring;
                }

                if (tmp == s)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

// 2025/9/30 String doubling (Passed: 4 ms, 11.38 MB)
class Solution {
public:
    bool repeatedSubstringPattern(string inputString) {
        int stringLength = inputString.length();
        if (stringLength <= 1)
        {
            return false;
        }

        int candidatePeriod = 1;
        while (candidatePeriod <= stringLength / 2)
        {
            bool isDivisorOfLength;
            if (stringLength % candidatePeriod == 0)
            {
                isDivisorOfLength = true;
            } else
            {
                isDivisorOfLength = false;
            }
        
            if (isDivisorOfLength)
            {
                bool matchesPattern = true;
                int compareIndex = candidatePeriod;
                while (compareIndex < stringLength && matchesPattern) {
                    if (inputString[compareIndex] != inputString[compareIndex - 
                            candidatePeriod])
                    {
                        matchesPattern = false;
                    }
                    compareIndex = compareIndex + 1;
                }

                if (matchesPattern) {
                    return true;
                }
            }

            candidatePeriod = candidatePeriod + 1;
        }

        return false;
    }
};