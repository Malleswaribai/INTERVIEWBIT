/*
Problem Description
 
 

You are given a string A, and you have to find all the amazing substrings of A.
An amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).
Note: Take the mod of the answer with 10003.


Problem Constraints
1 <= |S| <= 106
S can have special characters


Input Format
Only argument given is string S.


Output Format
Return a single integer X mod 10003, where X is the number of Amazing Substrings in the given string.


Example Input
ABEC


Example Output
6


Example Explanation
Amazing substrings of the given string are :
1. A
2. AB
3. ABE
4. ABEC
5. E
6. EC

 */

 int Solution::solve(string s) {
    //approach-1: it takes O(n*n)time complexity and O(1)space complexity.
    int n=s.size();
    int ct=0;
    for(int i=0; i<n; i++){
        char c=s[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            ct++;
            int j=i+1;
            while(j<n){
                ct++;
                j++;
            }
        }
    }
    int ans=ct%10003;
    return ans;
}
