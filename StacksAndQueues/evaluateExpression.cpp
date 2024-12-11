/*
Problem Description
 
 

An arithmetic expression is given by a string array A of size N. Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each string may be an integer or an operator.



Problem Constraints
1 <= N <= 105



Input Format
The only argument given is string array A.



Output Format
Return the value of arithmetic expression formed using reverse Polish Notation.



Example Input
Input 1:
    A =   ["2", "1", "+", "3", "*"]
Input 2:
    A = ["4", "13", "5", "/", "+"]


Example Output
Output 1:
    9
Output 2:
    6
*/
int Solution::evalRPN(vector<string> &s) {
    int n=s.size();
    if(n==1) return stoi(s[0]);
    stack<int>st;
    int res=0;
    for(int i=0; i<n; i++){
        if(s[i]=="+" || s[i]=="-" || s[i]=="*" || s[i]=="%" || s[i]=="/"){
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            if(s[i]=="+") res=x+y;
            if(s[i]=="-") res=y-x;
            if(s[i]=="*") res=y*x;
            if(s[i]=="/") res=y/x;
            if(s[i]=="%") res=y%x;
            st.push(res);
        }else{
            st.push(stoi(s[i]));
        }
    }
    return res;
}

