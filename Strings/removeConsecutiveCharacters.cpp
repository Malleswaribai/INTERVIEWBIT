/*
Problem Description
 
 

Given a string A and integer B, remove all consecutive same characters that have length exactly B.


NOTE : All the consecutive same characters that have length exactly B will be removed simultaneously.



Problem Constraints
1 <= |A| <= 100000

1 <= B <= |A|



Input Format
First Argument is string A.

Second argument is integer B.



Output Format
Return a string after doing the removals.



Example Input
Input 1:

A = "aabcd"
B = 2
Input 2:

A = "aabbccd"
B = 2


Example Output
Output 1:

 "bcd"
Output 2:

 "d"
*/
string Solution::solve(string A, int B) {
    int n=A.size();
    int ct=1;
    for(int i=0; i<n; i++){
        if(i<n-1 && A[i]==A[i+1]){
            ct++;
        }else{
            if(ct==B){
                A.erase(i+1-B,B);
                i=i-B;
            }
            ct=1;
        }
    }
    return A;
}
