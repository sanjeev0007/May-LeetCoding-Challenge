/*

Problem Statement !!!

Given a string, sort it in decreasing order based on the frequency of characters.

Example 1:

Input:
"tree"

Output:
"eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input:
"cccaaa"

Output:
"cccaaa"

Explanation:
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.


Example 3:

Input:
"Aabb"

Output:
"bbAa"

Explanation:
"bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
*/

class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> freqOfChar;
        for (char c : s)
        {
            freqOfChar[c]++;
        }
        //such that value will sort by frequencies
        map<int, string> dupStr;
        for (auto v : freqOfChar)
        {
            char c = v.first;
            int n = v.second;
            dupStr[n] += string(n, c);
        }

        string res;
        for (auto rit = dupStr.rbegin(); rit != dupStr.rend(); ++rit)
        {
            res += rit->second;
        }
        return res;
    }
};