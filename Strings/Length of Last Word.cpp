/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.
Input Format
The first argument is a string A


Output Format
Return an integer denoting the length of the last word in the string.


Example Input
Input 1:
A = " hello world "
Input 2:
A = "InterviewBit"


Example Output
Output 1:
5
Output 2:
12

*/
int Solution::lengthOfLastWord(const string A) {
    int ct=0;
    int n=A.size();
    int i=n-1;
    while(i>=0 && A[i]==' '){
        i--;
    }
    while(i>=0){
        if(A[i]==' '){
            break;
        }else{
            ct++;
        }
        i--;
    }
    return ct;
}
