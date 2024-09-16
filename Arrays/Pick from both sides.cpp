/*
Problem Description
 
 

Given an integer array A of size N.

You have to pick exactly B elements from either left or right end of the array A to get the maximum sum.

Find and return this maximum possible sum.

NOTE: Suppose B = 4 and array A contains 10 elements then

You can pick the first four elements or can pick the last four elements or can pick 1 from the front and 3 from the back etc. you need to return the maximum possible sum of elements you can pick.
Problem Constraints
1 <= N <= 105

1 <= B <= N

-103 <= A[i] <= 103



Input Format
First argument is an integer array A.

Second argument is an integer B.



Output Format
Return an integer denoting the maximum possible sum of elements you picked.



Example Input
Input 1:

 A = [5, -2, 3 , 1, 2]
 B = 3
Input 2:

 A = [1, 2]
 B = 1


Example Output
Output 1:

 8
Output 2:

 2

*/

#include <bits/stdc++.h>
int Solution::solve(vector<int> &arr, int B) {
    int mx=INT_MIN;
    int n=arr.size();
    int sum=accumulate(arr.begin(),arr.end(),0);
    if(n<=B){
        return sum;
    }
    int i=0, j=n-B-1;
    int winSum=accumulate(arr.begin()+i,arr.begin()+j+1,0);
    while(j<n){
        mx=max(mx,sum-winSum);
        if(j<n-1){
            winSum+=arr[j+1];
        }
        winSum-=arr[i];
        i++;
        j++;
    }
    return mx;
}
