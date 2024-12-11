/*
Problem Description
 
 

Given a large number represent in the form of an integer array A, where each element is a digit.

You have to find whether there exists any permutation of the array A such that the number becomes divisible by 60.

Return 1 if it exists, 0 otherwise.



Problem Constraints
1 <= |A| <= 105
0 <= Ai <= 9


Input Format
The first argument is an integer array A.


Output Format
Return a single integer '1' if there exists a permutation, '0' otherwise.


Example Input
Input 1:
A = [0, 6]
Input 2:

A = [2, 3]


Example Output
Output 1:
1
Output 2:

0
*/
#include<bits/stdc++.h>
int Solution::divisibleBy60(vector<int> &arr) {
    int n=arr.size();
    if(n==1 && arr[0]==0) return 1;
    bool flag=false;
    for(auto &x:arr){
        if(x==0){
            flag=true;
        }
    }
    if(flag==false) return 0;
    int ind=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            ind=i;
        }
    }
    arr.erase(arr.begin()+ind);
    bool flag1=false;
    for(auto &x:arr){
        if(x%2==0){
            flag1=true;
        }
    }
    if(flag1==false) return 0;
    int sumArray=accumulate(arr.begin(),arr.end(),0);
    if(sumArray%3!=0){
        return 0;
    }
    return 1;
}