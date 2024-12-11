/*
Problem Description
 
 

You are given two numbers A and B.

You have to add them without using arithmetic operators and return their sum.



Problem Constraints
1 <= A, B <= 109


Input Format
The first argument is the integer A. The second argument is the integer B.


Output Format
Return a single integer denoting their sum.


Example Input
Input 1:
A = 3
B = 10
Input 2:

A = 6
B = 1


Example Output
Output 1:
13
Output 2:

7
*/
int Solution::addNumbers(int A, int B) {
    // int mnElement=min(A,B);
    // int mxElement=max(A,B);
    // while(mxElement>0){
    //     mnElement++;
    //     mxElement--;
    // }
    // return mnElement;
    int i=0;
    while(i<B){
        A++;
        i++;
    }
    return A;
}
