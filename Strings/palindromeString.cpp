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
    string str;
    int n=s.size();
    int i=0;
    while(i<n){
    //    if((s[i]<='z'&& s[i]>='a') || (s[i]<='Z' && s[i]>='A')){
    //        str.push_back(s[i]);
    //    }
    //    i++;
    if (isalnum(s[i])) {
            str.push_back(tolower(s[i])); // Convert to lowercase
        }
        i++;
    }
    int m=str.size();
    int left=0, right=m-1;
    while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
