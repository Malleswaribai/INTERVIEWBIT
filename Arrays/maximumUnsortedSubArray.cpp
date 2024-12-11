/*
Problem Description
 
 

Given an array A of non-negative integers of size N. Find the minimum sub-array Al, Al+1 ,..., Ar such that if we sort(in ascending order) that sub-array, then the whole array should get sorted.
If A is already sorted, output -1.



Problem Constraints
1 <= N <= 1000000

1 <= A[i] <= 1000000



Input Format
First and only argument is an array of non-negative integers of size N.



Output Format
Return an array of length two where the first element denotes the starting index(0-based) and the second element denotes the ending index(0-based) of the sub-array. If the array is already sorted, return an array containing only one element i.e. -1.



Example Input
Input 1:

A = [1, 3, 2, 4, 5]
Input 2:

A = [1, 2, 3, 4, 5]


Example Output
Output 1:

[1, 2]
Output 2:

[-1]

*/
vector<int> Solution::subUnsort(vector<int> &nums) {
    vector<int>arr=nums;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int start=-1,end=-1;
    int i=0;
    while(i<n){
        if(nums[i]!=arr[i]){
            start=i;
            break;
        }
        i++;
    }
    if(start==-1) return {-1};
    i=n-1;
    while(i>=0){
        if(nums[i]!=arr[i]){
            end=i;
            break;
        }
        i--;
    }
    return {start,end};
}
