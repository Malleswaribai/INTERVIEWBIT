/*
Problem Description
 
 

You are given an array A of strings and we have to serialize it and return the serialized string.

Serialization: Scan each element in a string, calculate its length and append it with a string and a element separator or deliminator (the deliminator is ~). We append the length of the string so that we know the length of each element.

For example, for a string 'interviewbit', its serialized version would be 'interviewbit12~'.



Problem Constraints
1 <= |A| <= 1000
1 <= |Ai| <= 1000
Ai only contains lowercase english alphabets.


Input Format
The first argument A is the string array A.


Output Format
Return a single integer denoting the serialized string.


Example Input
Input 1:
A = ['scaler', 'academy']
Input 2:

A = ['interviewbit']


Example Output
Output 1:
scaler6~academy7~
Output 2:

interviewbit12~

*/
string Solution::serialize(vector<string> &arr) {
     //approach-1: it takes O(n) space and time complexity.
    int n=arr.size();
    string res;
    for(int i=0; i<n; i++){
        res+=arr[i];
        int length=arr[i].size();
        res+=to_string(length);
        res.push_back('~');
    }
    return res;
}
