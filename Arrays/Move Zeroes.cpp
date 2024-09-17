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
    //->Approach -1
    int n=arr.size();
    int nonZeroInd=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            swap(arr[i],arr[nonZeroInd]);
            nonZeroInd++;
        }
    }
    return arr;

    //->Approach-2
    vector<int>res;
    int ZeroCount=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>0){
            res.push_back(arr[i]);
        }else{
            ZeroCount++;
        }
        
    }
    while(ZeroCount>0){
        res.push_back(0);
        ZeroCount--;
    }
    return res;
}
