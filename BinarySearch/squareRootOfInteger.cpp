/*
Problem Description
 
 

Given an integer A.

Compute and return the square root of A.

If A is not a perfect square, return floor(sqrt(A)).

DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY.

NOTE: Do not use sort function from standard library. Users are expected to solve this in O(log(A)) time.



Problem Constraints
0 <= A <= INTMAX


Input Format
The first and only argument given is the integer A.



Output Format
Return floor(sqrt(A))



Example Input
Input 1:

 11
Input 2:

 9


Example Output
Output 1:

 3
Output 2:

 3
*/
int Solution::sqrt(int n) {
    //approach-1: it takes O(n)time complexity
    long long int ans=0;
    for(int i=1; i<=n; i++){
        long long int x=i*i;
        if(x<=n){
            ans=i;
        }
    }
    return ans;
    //approach-1: it is optimized approach takes O(long) time compleixty using binary search.
    int ans=0;
    int l=1, r=n;
    while(l<=r){
        int mid= (r-l)/2 + l;
        if(mid*1LL*mid>n){
            r=mid-1;
        }else{
            ans=mid;
            l=mid+1;
        }
    }
    return ans;
}
