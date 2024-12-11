/*
Problem Description
 
 

Given an integer array A, move all 0's to the end of it while maintaining the relative order of the non-zero elements.


Note that you must do this in-place without making a copy of the array.



Problem Constraints
1 <= |A| <= 105


Input Format
First argument is array of integers A.


Output Format
Return an array of integers which satisfies above property.


Example Input
Input 1:
A = [0, 1, 0, 3, 12]
Input 2:

A = [0]
Example Output
Ouput 1:
[1, 3, 12, 0, 0]
Ouput 2:

[0]

*/
vector<int> Solution::solve(vector<int> &arr) {
       int n=arr.size();
    //approach-1: it is brute force we are making the copy of the given array and using space
    vector<int>v;
    int zeroCount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zeroCount++;
        }else{
            v.push_back(arr[i]);
        }
    }
    while(zeroCount>0){
        v.push_back(0);
        zeroCount--;
    }
    return v;
    //approach-2: it is optimized approach where we are doing it in place without making copy of the array and here we are keeping nonzeroelement index updated.
    int nonZeroIndex=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            swap(arr[i],arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
    return arr;
}
