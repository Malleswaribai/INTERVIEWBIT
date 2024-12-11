/*
Problem Description
 
 

You are given a string A of size N.

 

Return the string A after reversing the string word by word.

NOTE:

A sequence of non-space characters constitutes a word.
Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.
If there are multiple spaces between words, reduce them to a single space in the reversed string.
 



Problem Constraints
1 <= N <= 3 * 105



Input Format
The only argument given is string A.



Output Format
Return the string A after reversing the string word by word.



Example Input
Input 1:
    A = "the sky is blue"
Input 2:
    A = "this is ib"


Example Output
Output 1:
    "blue is sky the"
Output 2:
    "ib is this"


*/

string Solution::solve(string s) {
    //approach-1: here we are using O(n) space complexity and O(n) time complexity.
    int n=s.size();
    vector<string>v;
    int i=0;
    while(i<n && s[i]==' '){
        i++;
    }
     string temp;
    while(i<n){
        if(s[i]==' '){
            if(!temp.empty()){
                v.push_back(temp);
                temp.erase();
            }
            while(i<n && s[i]==' '){
                i++;
            }
        }else{
            temp.push_back(s[i]);
            i++;
        }
    }
    if(!temp.empty()){
        v.push_back(temp);
    }
    reverse(v.begin(),v.end());
    string res;
    for(int i=0; i<v.size(); i++){
        res+=v[i];
        if(i!=v.size()-1){
            res.push_back(' ');
        }
    }
    return res;
}
