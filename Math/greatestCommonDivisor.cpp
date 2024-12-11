/*
Problem Description
 
 

Given 2 non-negative integers A and B, find gcd(A, B).
GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both A and B fit in a 32-bit signed integer.
NOTE: DO NOT USE LIBRARY FUNCTIONS


Problem Constraints
0 <= A <= 109
0 <= B <= 109


Input Format
The first argument is an integer A.
The second argument is an integer B.


Output Format
Return the Greatest Common Divisor of A and B


Example Input
Input 1:
A = 6
B = 9


Example Output
Output 1:
3
*/
int Solution::gcd(int A, int B) {
    int n=min(A,B);
    if(A==0 || B==0) return max(A,B);
    int res=INT_MIN;
    for(int i=1; i<=n; i++){
        if(A%i==0 && B%i==0){
            res=max(res,i);
        }
    }
    return res;
}
