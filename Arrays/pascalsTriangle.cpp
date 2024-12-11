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

vector<vector<int> > Solution::solve(int n) {
    //here where n is the number of rows
    if(n==0) return {};
    vector<vector<int>>res;
    vector<int>prev;
    prev.push_back(1);
    res.push_back(prev);
    n--;
    while(n>=1){
        n--;
        vector<int>temp;
        for(int i=0; i<prev.size(); i++){
            int x=prev[i]+prev[i-1];
            temp.push_back(x);
        }
        temp.push_back(1);
        res.push_back(temp);
        prev=temp;
    }
    return res;
}
