/*
Problem Description
 
 

Given an array of integers A of size N and an integer B.
array A is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2 ).
You are given a target value B to search. If found in the array, return its index, otherwise, return -1.
You may assume no duplicate exists in the array.

NOTE:- Array A was sorted in non-decreasing order before rotation.

Think about the case when there are duplicates. Does your current solution work? How does the time complexity change?



Problem Constraints
1 <= N <= 1000000
1 <= A[i] <= 10^9
1 <= B <= 10^9
all elements in A are distinct.



Input Format
The first argument given is the integer array A.

The second argment given is the integer B.



Output Format
Return index of B in array A, otherwise return -1



Example Input
Input 1: 

A = [4, 5, 6, 7, 0, 1, 2, 3]
B = 4 
Input 2: 

A = [5, 17, 100, 3]
B = 6


Example Output
Output 1: 

 0 
Output 2: 

 -1
*/

int Solution::search(const vector<int> &arr, int k) {
    int n=arr.size();
    int l=0, r=n-1;
    int res=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==k){
           return mid;
        }
        // if left half sorted
        if(arr[l]<=arr[mid]){
                if(arr[l]<=k && k<=arr[mid]){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
        }else{
                if(arr[mid]<=k&& k<=arr[r]){// if right half is sorted
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
    }
    return res;
}
