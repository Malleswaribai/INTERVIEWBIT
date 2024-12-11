/*
Problem Description
 
 

Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed. Negative numbers are not palindromic.



Problem Constraints
INT_MIN <= A <= INT_MAX


Input Format
The first argument is an integer A.


Output Format
Return 1 if A is a Palindrome Integer else return 0.


Example Input
Input 1:
A = 12121
Input 2:
A = 123


Example Output
Output 1:
1
Output 2:
0
*/

int Solution::isPalindrome(int n) {
    if(n<0) return 0;
    vector<int>v;
    while(n>0){
        int lastDigit=n%10;
        v.push_back(lastDigit);
        n=n/10;
    }
    int ans=1;
    int i=0, j=v.size()-1;
    while(i<=j){
        if(v[i]!=v[j]){
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
