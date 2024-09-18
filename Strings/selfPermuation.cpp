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
    vector<char>v;
    vector<char>v1;
    int n=A.size(), m=B.size();
    int i=0, j=0;
    while(i<n){
        v.push_back(A[i]);
        i++;
    }
     while(j<m){
        v1.push_back(B[j]);
        j++;
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int k=0;
    while(k<n && k<m){
        if(v[k]!=v1[k]){
            return 0;
        }
        k++;
    }
    return 1;
}
