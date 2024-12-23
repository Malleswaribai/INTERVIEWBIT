/*
Problem Description
 
 

Another question which belongs to the category of questions which are intentionally stated vaguely.

Expectation is that you will ask for correct clarification or you will state your assumptions before you start coding.

Implement strStr().

strstr - locate a substring ( needle ) in a string ( haystack ).

Try not to use standard library string functions for this question.

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

NOTE: String A is haystack, B is needle.

Good clarification questions:

What should be the return value if the needle is empty?
What if both haystack and needle are empty?
For the purpose of this problem, assume that the return value should be -1 in both cases.


Problem Constraints
1 <= |haystack| <= 104
1 <= |needle| <= 103


Input Format
The first argument is a string A (haystack)
The second argument is a string B (needle)


Output Format
Return an integer, the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.


Example Input
Input 1:
A = "strstr"
B = "str"
Input 2:
A = "bighit"
B = "bit"


Example Output
Output 1:
0
Output 1:
-1


*/

#include<bits/stdc++.h>
int Solution::strStr(const string s, const string k) {
    int n=s.size();
    int m=k.size();
    if(m==0)return 0;
     if(n==0) return 0;
    for(int i=0; i<n; i++){
        int j=0;
        while(j<m && s[i+j]==k[j]){
            j++;
        }
        if(j==m){
            return i;
        }
    }
    return -1;
}
