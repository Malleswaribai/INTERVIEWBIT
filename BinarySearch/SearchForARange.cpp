/*
Problem Description
 
 

Given a sorted array of integers A(0 based index) of size N, find the starting and the ending position of a given integer B in array A.

Your algorithm's runtime complexity must be in the order of O(log n).

Return an array of size 2, such that the first element = starting position of B in A and the second element = ending position of B in A, if B is not found in A return [-1, -1].



Problem Constraints
1 <= N <= 106

1 <= A[i], B <= 109



Input Format
The first argument given is the integer array A.

The second argument given is the integer B.



Output Format
Return an array of size 2, such that the first element = starting position of B in A and the second element = the ending position of B in A if B is not found in A return [-1, -1].



Example Input
Input 1:

 A = [5, 7, 7, 8, 8, 10]
 B = 8
Input 2:

 A = [5, 17, 100, 111]
 B = 3


Example Output
Output 1:

 [3, 4]
Output 2:

 [-1, -1]
*/
vector<int> Solution::searchRange(const vector<int> &arr, int k) {
    int n=arr.size();
    int l=0, r=n-1;
    int righMostIndex=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==k){
            righMostIndex=mid;
        }
        if(arr[mid]<=k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    int leftMostIndex=-1;
    l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==k){
            leftMostIndex=mid;
        }
        if(arr[mid]>=k){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return {leftMostIndex,righMostIndex};
}
