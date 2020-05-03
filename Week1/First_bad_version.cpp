/*

Problem Source :-https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

Problem Statement!!!


You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.


Example Test Case

Given n = 5, and version = 4 is the first bad version.

call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true

Then 4 is the first bad version.

*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//Only need to complete functions


class Solution {
public:
    int firstBadVersion(int n) {
        //Here we gonna apply binary search
        int l=1;
        int r=n;
        while(l<r){
            int m=(r-l)/2+l;
        if(isBadVersion(m))
            r=m;
        else
            l=m+1;
            
        }
        
        return l;
    }
};
/*
Explanation:-
First thing which comes in our mind is using simple linear search but it gives Time Limit Exceed which means you have to optimize your solution
so we know that time complexity of binary search is better than linear search 
So i applied it. 

*/
