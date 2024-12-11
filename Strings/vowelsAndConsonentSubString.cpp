/*
Problem Description
 
 

Given a string A consisting of lowercase characters.

You have to find the number of substrings in A which starts with vowel and end with consonants or vice-versa.

Return the count of substring modulo 109 + 7.



Problem Constraints
1 <= |A| <= 105

A consists only of lower-case characters.



Input Format
First argument is an string A.



Output Format
Return a integer denoting the the number of substrings in A which starts with vowel and end with consonants or vice-versa with modulo 109 + 7.



Example Input
Input 1:

 A = "aba"
Input 2:

 A = "a"


Example Output
Output 1:

 2
Output 2:

 0
*/
int Solution::solve(string s) {
    int n=s.size();
    long long int mod=1000000007;
    int vowCount=0, conCount=0;
    for(auto x:s){
        if(x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u'){
            vowCount++;
        }else{
            conCount++;
        }
    }
    return (vowCount*conCount)%mod;
}
