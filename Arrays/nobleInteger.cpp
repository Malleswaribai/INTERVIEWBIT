/*
Problem Description
 
 

Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.



Problem Constraints
1 <= |A| <= 106
-109 <= Ai <= 109


Input Format
First and only argument is an integer array A.



Output Format
Return 1 if any such integer p is found else return -1.



Example Input
Input 1:

 A = [3, 2, 1, 3]
Input 2:

 A = [1, 1, 3, 3]


Example Output
Output 1:

 1
Output 2:

 -1

*/

int Solution::solve(vector<int> &arr) {
    //approach-1: it takes O(n*n) time complexity and O(1) space complexity
    int n=arr.size();//5,6,2
    sort(arr.begin(),arr.end());//2,5,6
    int ans=-1;
    for(int i=0; i<n; i++){
        int j=i;
        while(j<n && arr[j]==arr[i]){
            j++;
        }
        int count=n-j;// it gives the no of elements greater than the present element
        if(arr[i]==count){
            ans=1;
        }
    }
    return ans;
}
