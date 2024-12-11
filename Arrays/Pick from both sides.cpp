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

int Solution::solve(vector<int> &arr, int k) {
    //approach-1: it is brute force , which takes O(1)space complexity and O(n*n)time complexity
    
    int n=arr.size();
    int maxSum=INT_MIN;
    int first=0;
    while(first<=k){
        int leftSum=0, rightSum=0;
        for(int i=0; i<first; i++){
            leftSum+=arr[i];
        }
        int last=k-first;
        for(int i=n-last; i<n; i++){
            rightSum+=arr[i];
        }
        int sum=leftSum+rightSum;
        maxSum=max(maxSum,sum);
        first++;
    }
    return maxSum;
    // appraoch-2: it is optimized approach which takes O(n) spacce complexity and O(n)time complexity
    vector<int>prefix;
    vector<int>suffix;
    int n=arr.size();
    prefix.push_back(arr[0]);
    int prefixSum=arr[0];
    for(int i=1; i<n; i++){
        int x=prefixSum+arr[i];
        prefix.push_back(x);
        prefixSum=x;
    }
    suffix.push_back(arr[n-1]);
    int suffixSum=arr[n-1];
    for(int i=n-2; i>=0; i--){
        int x=suffixSum+arr[i];
        suffix.push_back(x);
        suffixSum=x;
    }
    reverse(suffix.begin(),suffix.end());
    int mxSum=INT_MIN;
    int first=0;
    while(first<=k){
        int leftSum=0, rightSum=0;
        leftSum=prefix[first-1];
        int last=k-first;
        rightSum=suffix[n-last];
        int sum=leftSum+rightSum;
        mxSum=max(mxSum,sum);
        first++;
    }
    return mxSum;
} 
