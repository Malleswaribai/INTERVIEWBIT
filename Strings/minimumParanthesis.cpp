/*
Problem Description

Given a string A of parantheses  ‘(‘ or ‘)’.

The task is to find minimum number of parentheses ‘(‘ or ‘)’ (at any positions) we must add to make the resulting parentheses string valid.

An string is valid if:

Open brackets must be closed by the corresponding closing bracket.
Open brackets must be closed in the correct order.


Problem Constraints
1 <= |A| <= 105

A[i] = '(' or A[i] = ')'



Input Format
First and only argument is an string A.



Output Format
Return a single integer denoting the minimumnumber of parentheses ‘(‘ or ‘)’ (at any positions) we must add in A to make the resulting parentheses string valid.



Example Input
Input 1:

 A = "())"
Input 2:

 A = "((("


Example Output
Output 1:

 1
Output 2:

 3

*/

int Solution::solve(string s) {
    stack<char>st;
    int n=s.size();
    int ans=0;
    for(int i=0; i<n; i++){
        if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }else{
                ans++;
            }
        }else{
            st.push(s[i]);
        }
    }
    ans+=st.size();
    return ans;
}
