/*

source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/

Problem Statement !!!

Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true


*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ct[26]={0};
        for(char i:magazine)
            ct[i-'a']++;
        for(char i:ransomNote)
        {
            ct[i-'a']--;
            if(ct[i-'a']<0)
                return false; //it means the element is not present or it is present in excess!!!
        }
        return true;
        
        
    }
};