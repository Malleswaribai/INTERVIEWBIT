/*
Problem Description
 
 

You are given two strings A and B.
Check whether there exists any permutation of both A and B such that they are equal.

Return a single integer 1 if its exists, 0 otherwise.



Problem Constraints
1 <= |A|, |B| <= 105
Both strings contain only lowercase english alphabets.


Input Format
The first argument is the string A. The second argument is the string B.


Output Format
Return a single integer 1 if a permutation exists, 0 otherwise.


Example Input
Input 1:
A = 'scaler'
B = 'relasc'
Input 2:

A = 'scaler'
B = 'interviewbit'


Example Output
Output 1:
1
Output 2:

0
*/

int Solution::permuteStrings(string A, string B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n1=A.size();
    int n2=B.size();
    int i=0;
    int ans=1;
    while(i<n1 && i<n2){
        if(A[i]!=B[i]){
            ans=0;
        }
        i++;
    }
    return ans;
}
