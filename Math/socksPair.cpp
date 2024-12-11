/*
Problem Description
 
 

Given an integer array A of integers.
Every element in the array repersent a colour of a sock, find how many pair of socks with matching colours there are.


Problem Constraints
1 <= |A| <= 105
1 <= Ai <= |A|


Input Format
Given an integer array A.


Output Format
Return an integer.


Example Input
Input 1:
A = [1, 2, 3]
Input 2:

A = [2, 2, 2, 2]


Example Output
Output 1:
0
Output 2:

2
*/
int Solution::solve(vector<int> &arr) {
    int n=arr.size();
    map<int,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    int pairCount=0;
    auto it=m.begin();
    while(it!=m.end()){
        int x=it->second;
        if(x>1){
            pairCount+=x/2;
        }
        it++;
    }
    return pairCount;
}
