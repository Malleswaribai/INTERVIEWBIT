/*
Problem Description

Given a string A consisting only of '(' and ')'.

You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.



Problem Constraints
1 <= |A| <= 105



Input Format
First argument is an string A.



Output Format
Return 1 if parantheses in string are balanced else return 0.



Example Input
Input 1:

 A = "(()())"
Input 2:

 A = "(()"


Example Output
Output 1:

 1
Output 2:

 0


*/
int Solution::solve(string s) {
    int n=s.size();
    int res=1;
    stack<char>st;
    int i=0;
    while(i<n){
        if(s[i]=='('){
            st.push(s[i]);
        }else{
            if(!st.empty()){
                if(st.top()=='('){
                st.pop();
                }
            }else{
                res=0;
                return res;
            }
        }
        i++;
    }
    if(!st.empty()){
        res=0;
    }
    return res;
    
}
