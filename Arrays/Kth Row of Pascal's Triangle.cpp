/*
Problem Description

Given an index k, return the kth row of the Pascal's triangle.
Pascal's triangle: To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:

Input : k = 3


Return : [1,3,3,1]

Note: k is 0 based. k = 0, corresponds to the row [1]. 

*/

vector<int> Solution::getRow(int rows) {
    // vector<vector<int>>v;
    // int numRows=0;
    // vector<int>prev;
    // prev.push_back(1);
    // v.push_back(prev);
    // if(rows==0)return prev;
    // while(numRows<=rows){
    //     numRows++;
    //     vector<int>temp;
    //     for(int i=0; i<prev.size(); i++){
    //         int x=prev[i]+prev[i-1];
    //         temp.push_back(x);
    //     }
    //     temp.push_back(1);
    //     v.push_back(temp);
    //     prev=temp;
    //     if(numRows==rows){
    //         return prev;
    //     }
    // }
    int n=0;
    vector<int>prev={1};
    while(n<rows){
        vector<int>temp;
        for(int i=0; i<prev.size(); i++){
            int x=prev[i]+prev[i-1];
            temp.push_back(x);
        }
        temp.push_back(1);
        prev=temp;
        n++;
    }
    return prev;
}
