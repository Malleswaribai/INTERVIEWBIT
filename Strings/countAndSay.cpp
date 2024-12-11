/*
Problem Description

The count-and-say sequence is the sequence of integers beginning as follows: 
1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11. 11 is read off as two 1s or 21.
21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2, the sequence is 11.



*/
string Solution::countAndSay(int n) {
    vector<int>prev;
    prev.push_back(1);
    int i=1;
    while(i<n){
        vector<int>temp2;
        int j=0;
        while(j<prev.size()){
            int k=j+1, ct=1;
            while(k<prev.size() && prev[j]==prev[k]){
                ct++;
                k++;
            }
            temp2.push_back(ct);
            temp2.push_back(prev[j]);
            j=k;
        }
        prev=temp2;
        i++;
    }
    string res;
    for(int i=0; i<prev.size(); i++){
        res+=to_string(prev[i]);
    }
    return res;
}
