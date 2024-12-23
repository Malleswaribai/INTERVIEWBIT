/*
Problem Description

Given an sorted array A of size N. Find number of elements which are less than or equal to B.

NOTE: Expected Time Complexity O(log N)



Problem Constraints
1 <= N <= 106

1 <= A[i], B <= 109



Input Format
First agument is an integer array A of size N.

Second argument is an integer B.



Output Format
Return an integer denoting the number of elements which are less than or equal to B.



Example Input
Input 1:

 A = [1, 3, 4, 4, 6]
 B = 4
Input 2:

 A = [1, 2, 5, 5]
 B = 3


Example Output
Output 1:

 4
Output 2:

 2

*/
int Solution::solve(vector<int> &arr, int k) {
    int n=arr.size();
    int rightMostIndexOfK=-1;
    int l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]<=k){
            rightMostIndexOfK=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return rightMostIndexOfK+1;
}
