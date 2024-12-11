/*
Problem Description
 
 

Given an array of integers A, sort the array into a wave-like array and return it. 
In other words, arrange the elements into a sequence such that

a1 >= a2 <= a3 >= a4 <= a5..... 
NOTE: If multiple answers are possible, return the lexicographically smallest one.



Problem Constraints
1 <= len(A) <= 106

1 <= A[i] <= 106



Input Format
The first argument is an integer array A.



Output Format
Return an array arranged in the sequence as described.



Example Input
Input 1:

A = [1, 2, 3, 4]
Input 2:

A = [1, 2]


Example Output
Output 1:

[2, 1, 4, 3]
Output 2:

[2, 1]
*/

vector<int> Solution::wave(vector<int> &arr) {
    approach-1: it takes O(n) space complexity and o(n) time complexity
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<int>res;
    int i=0;
    if(n%2!=0){
            while(i<n-1){
            int small=arr[i];
            int big=arr[i+1];
            res.push_back(big);
            res.push_back(small);
            i+=2;
        }
        res.push_back(arr[n-1]);
    }else{
         while(i<n){
            int small=arr[i];
            int big=arr[i+1];
            res.push_back(big);
            res.push_back(small);
            i+=2;
        }
    }
    return res;
    //approach-2:it is optimized approach it takes only time complexity of O(n).
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int i=0;
    while(i<n-1){
        swap(arr[i],arr[i+1]);
        i+=2;
    }
    return arr;
}
