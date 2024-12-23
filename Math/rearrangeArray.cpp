/*
Given an array A of size N. Rearrange the given array so that A[i] becomes A[A[i]] with O(1) extra space.
Lets say N = size of the array. Then, following holds true :

All elements in the array are in the range [0, N-1]
N * N does not overflow for a signed integer

Constraints:

1 <= N <= 5×104

0 <= A[i] <= N - 1

The elements of A are distinct 

Input Format

The argument A is an array of integers

Example 1:

Input : [1, 0]
Return : [0, 1]
Example 2:

Input : [0, 2, 1, 3]
Return : [0, 1, 2, 3]
 

*/
void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int>temp=A;
    int n=A.size();
    for(int i=0; i<n; i++){
        int x=temp[temp[i]];
        A[i]=x;
    }
    return ;
}
