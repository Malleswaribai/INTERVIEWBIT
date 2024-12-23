/*
Problem Description
 
 

Given a bitonic sequence A of N distinct elements, write a program to find a given element B in the bitonic sequence in O(logN) time.

NOTE:

A Bitonic Sequence is a sequence of numbers which is first strictly increasing then after a point strictly decreasing.


Problem Constraints
3 <= N <= 105

1 <= A[i], B <= 108

Given array always contain a bitonic point.

Array A always contain distinct elements.



Input Format
First argument is an integer array A denoting the bitonic sequence.

Second argument is an integer B.



Output Format
Return a single integer denoting the position (0 index based) of the element B in the array A if B doesn't exist in A return -1.



Example Input
Input 1:

 A = [3, 9, 10, 20, 17, 5, 1]
 B = 20
Input 2:

 A = [5, 6, 7, 8, 9, 10, 3, 2, 1]
 B = 30


Example Output
Output 1:

 3
Output 2:

 -1


Example Explanation
Explanation 1:

 B = 20 present in A at index 3
Explanation 2:

 B = 30 is not present in A
*/
int Solution::solve(vector<int> &arr, int k) {
    int n=arr.size();
    int l=0, r=n-1;
    int PeackElementIndex=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]>arr[mid-1]){
            PeackElementIndex=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    l=0, r=PeackElementIndex;
    int res=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==k){
            res=mid;
        }
        if(arr[mid]<k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    l=PeackElementIndex+1, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==k){
            res=mid;
        }
        if(arr[mid]>k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return res;
}
