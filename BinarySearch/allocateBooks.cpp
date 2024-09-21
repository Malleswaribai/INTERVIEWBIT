/*
Problem Description
 
 

Given an array of integers A of size N and an integer B.

The College library has N books. The ith book has A[i] number of pages.

You have to allocate books to B number of students so that the maximum number of pages allocated to a student is minimum.

A book will be allocated to exactly one student.
Each student has to be allocated at least one book.
Allotment should be in contiguous order, for example: A student cannot be allocated book 1 and book 3, skipping book 2.
Calculate and return that minimum possible number.

NOTE: Return -1 if a valid assignment is not possible.



Problem Constraints
1 <= N <= 105
 1 <= A[i], B <= 105



Input Format
The first argument given is the integer array A.
The second argument given is the integer B.



Output Format
Return that minimum possible number.



Example Input
Input 1:
A = [12, 34, 67, 90]
B = 2
Input 2:
A = [5, 17, 100, 11]
B = 4


Example Output
Output 1:
113
Output 2:
100

*/
#include<bits/stdc++.h>
int Solution::books(vector<int> &arr, int St) {
    // sort(arr.begin(),arr.end());
   int n=arr.size();
   if(St>n) return -1;
   int totalPages=accumulate(arr.begin(),arr.end(),0);
   int l=0, r=totalPages;
   int res=0;
   while(l<=r){
         int S=St;
       int mid=(l+r)/2;
       int i=0;
       int pages=0;
       while(i<n  && S>0){
           if((pages+arr[i])<=mid){
               pages+=arr[i];
               i++;
           }else{
               S--;
               pages=0;
           }
       }
       if(S!=0){
           res=mid;
           r=mid-1;
       }else{
           l=mid+1;
       }
   }
   return res;
}
