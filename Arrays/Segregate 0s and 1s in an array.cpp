/*
Problem Description
 
 


You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array [Basically you have to sort the array]. Traverse array only once. 



Problem Constraints
1<=|A|<=1e6
Input Format
First argument is array of integers consisting of 0's and 1's only.


Output Format
Return a sorted array.


Example Input
Input 1:
a=[0 1 0]
Input 2:

A=[1 1 0 ]
Example Output
Ouput 1:
[0 0 1]
Ouput 2:

[0 1 1]
*/

vector<int> Solution::solve(vector<int> &arr) {
    // Approach -1 -> it a brute force takes three traversal of array
    int n=arr.size();
    vector<int>res(n);
    int count=0;
    for(int auto &x:arr){
        if(x==0){
            count++;
        }
    }
    for(int i=0; i<c; i++){
        res.push_back(0);
    }
    for(int i=c-1; i<n; i++){
        res.push_back(1);
    }
    return res;
    //Approach-2 -> it a optimized approach we will traverse at only once in an array. by keeping index of 0s updated.
    int n=arr.size();
    int ZeroCount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            swap(arr[i],arr[ZeroCount]);
            ZeroCount++;
        }
    }
    return arr;
}

