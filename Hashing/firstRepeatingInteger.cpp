/*
Problem Description

Given an integer array A of size N, find the first repeating element in it.

We need to find the element that occurs more than once and whose index of first occurrence is smallest.

If there is no repeating element, return -1.



Problem Constraints
1 <= N <= 105

1 <= A[i] <= 109



Input Format
First and only argument is an integer array A of size N.



Output Format
Return an integer denoting the first repeating element.



Example Input
Input 1:

 A = [10, 5, 3, 4, 3, 5, 6]
Input 2:

 A = [6, 10, 5, 4, 9, 120]


Example Output
Output 1:

 5
Output 2:

 -1


*/
int Solution::solve(vector<int> &arr) {
    int n=arr.size();
    unordered_map<int,int>m;
    for(auto x:arr) m[x]++;
    int res=-1,ct=0;
    for(int i=0; i<n; i++){
        auto it=m.find(arr[i]);
        if(it!=m.end()){
             ct=it->second;
        }
        if(ct>1){
            res=arr[i];
            break;
        }else{
            ct=0;
        }
    }
    return res;
}