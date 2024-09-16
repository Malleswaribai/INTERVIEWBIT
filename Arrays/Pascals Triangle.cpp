/*
Problem Description
 
 

Given an integer A, equal to numRows, generate the first numRows of Pascal's triangle.
Pascal's triangle: To generate A[C] in row R, sum up A'[C] and A'[C-1] from the previous row R - 1.



Problem Constraints
0 <= A <= 25


Input Format
The first argument is an integer A, equal to the numRows.


Output Format
Return an array of array of integers, equal to pascal triangle.


Example Input
A = 5


Example Output
[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

*/

vector<vector<int> > Solution::solve(int rows) {
    if(rows==0) return { };
    int n=1;
    vector<vector<int>>res;
    vector<int>prev(n,1);
    res.push_back(prev);
    n++;
    while(rows>1){
        vector<int>temp;
        temp.push_back(1);
        for(int i=0; i<n-2; i++){
            int x=prev[i+1]+prev[i];
            temp.push_back(x);
        }
        temp.push_back(1);
        prev=temp;
        res.push_back(temp);
        n++;
        rows--;
    }
    return res;
}
