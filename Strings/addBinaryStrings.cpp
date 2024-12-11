/*
Problem Description
 
 

Given two binary strings A and B. Return their sum (also a binary string).


Problem Constraints
1 <= length of A <= 105

1 <= length of B <= 105

A and B are binary strings



Input Format
The two argument A and B are binary strings.



Output Format
Return a binary string denoting the sum of A and B



Example Input
Input 1:
A = "100"
B = "11"
Input 2:
A = "110"
B = "10"


Example Output
Output 1:
"111"
Output 2:
"1000"
*/
string Solution::addBinary(string s1, string s2) {
    string res;
    int n1=s1.size(), n2=s2.size();
    int i=n1-1, j=n2-1, carry=0;
    while(i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0){
            sum+=s1[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=s2[j]-'0';
            j--;
        }
        res.push_back(sum%2+'0');
        carry=sum/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
