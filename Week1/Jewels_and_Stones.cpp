/*

Problem  Source:-https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/
 
Problem Statement!!!

You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example Testcase:

Input: J = "aA", S = "aAAbbbb"
Output: 3

*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int J_len=J.length();
        int S_len=S.length();
        int ct=0;
        for(int i=0;i<S_len;++i)
            for(int j=0;j<J_len;++j)
                if(S[i]==J[j])
                    ct++;
        return ct;
    }
};

/*
Exaplanation:
simple brute force answer will give you AC!
*/