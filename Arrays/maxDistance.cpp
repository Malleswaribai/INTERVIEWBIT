/*
Problem Description
 
 

Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].



Problem Constraints
1 <= |A| <= 106
-109 <= Ai <= 109


Input Format
First and only argument is an integer array A.



Output Format
Return an integer denoting the maximum value of j - i;



Example Input
Input 1:

 A = [3, 5, 4, 2]


Example Output
Output 1:

 2

*/

int Solution::maximumGap(const vector<int> &arr) {
    //approach-1: it takes worst case O(n*n) time complexity.
    int n=arr.size();
    if(n<=1) return 0;
    int mxDistance=0;
    for(int i=0; i<n; i++){
        int x=arr[i];
        int j=i+1;
        while(j<n){
            if(arr[i]<=arr[j]){
                mxDistance=max(mxDistance,abs(j-i));
            }
            j++;
        }
    }
    return mxDistance;
    //approach-2: 
}
