/*
Problem Description
 
 

Given a string, determine if it is a palindrome. While checking for a palindrome, you have to ignore spaces, case, and all special characters; i.e. consider only alphanumeric characters.

Check the sample test case for reference.
Return 0 / 1 ( 0 for false, 1 for true ) for this problem


Problem Constraints
1 <= |A| <= 106


Input Format
The first argument is a string A.


Output Format
Return 0 / 1 ( 0 for false, 1 for true ) for this problem


Example Input
Input 1:
"A man, a plan, a canal: Panama"
Input 2:
"race a car"


Example Output
Output 1:
1
Output 2:
0

*/
int Solution::isPalindrome(string s) {
    string s1;
    // for(int i=0; i<s1.size(); i++){
    //     if((s[i]<='z' && s[i]>='a') || (s[i]<='Z' && s[i]>='A') || (s[i]<='9' && s[i]>='0')){
    //         if(s[i]<='Z' && s[i]>='A' ){
    //             s[i]=((char)(s[i]+32));
    //         }
    //         s1.push_back(s[i]);
    //     }
    // }
    for(int i=0; i<s.size(); i++){
        if(isalnum(s[i])){
            s1.push_back(tolower(s[i]));
        }
    }
    int n=s1.size();
    int i=0, j=n-1;
    while(i<=j){
        if(s1[i]==s1[j]){
            i++;
            j--;
        }else{
            return 0;
        }
        
    }
    return 1;
}
