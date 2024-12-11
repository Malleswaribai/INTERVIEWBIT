/*
Problem Description
 
 

Given a matrix of integers A of size N x M and an integer B. Write an efficient algorithm that searches for integer B in matrix A. 

This matrix A has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than or equal to the last integer of the previous row.
Return 1 if B is present in A, else return 0.

NOTE: Rows are numbered from top to bottom, and columns are from left to right.



Problem Constraints
1 <= N, M <= 1000

1 <= A[i][j], B <= 106



Input Format
The first argument given is the integer matrix A.

The second argument given is the integer B.



Output Format
Return 1 if B is present in A else, return 0.



Example Input
Input 1: 

A = [ 
      [1,   3,  5,  7]
      [10, 11, 16, 20]
      [23, 30, 34, 50]

    ]
B = 3
Input 2:

A = [

      [5, 17, 100, 111]
      [119, 120, 127, 131]

    ]
B = 3


Example Output
Output 1: 

1
Output 2:

0

*/
int Solution::searchMatrix(vector<vector<int> > &arr, int k) {
    //approach-1: it takes O(n*m) time complexity and O(1)space complexity
    int n=arr.size(),m=arr[0].size();
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==k){
                ans=1;
                break;
            }
        }
    }
    return ans;
    //approch-2: it takes O(n*log(m))time complexity
    int n=arr.size(), m=arr[0].size();
    int ans=0;
    for(int i=0; i<n; i++){
        int l=0, r=m-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[i][mid]==k){
                ans=1;
                break;
            }else if(arr[i][mid]<k){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
    }
    return ans;
}
