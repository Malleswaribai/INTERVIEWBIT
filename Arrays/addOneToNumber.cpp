/*
Problem Description
 
 

Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer. For example: 
for this problem, following are some good questions to ask :

Q : Can the input have 0's before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0's before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.


Problem Constraints
1 <= |A| <= 106
0 <= Ai <= 9


Input Format
First argument is an array of digits.



Output Format
Return the array of digits after adding one.



Example Input
Input 1:

[1, 2, 3]


Example Output
Output 1:

[1, 2, 4]

*/

vector<int> Solution::plusOne(vector<int> &arr) {
    //approach-1:here we are adding one to last digit and by adding carry to each element in the array everytime 
    //we are pushing into the resulted vector and later we may push more zeros at the last so we have to delete all because no number starts with zero
    
    int n=arr.size();
    vector<int>res;
    int carry=0;
    int lastDigit=arr[n-1]+1;
    if(lastDigit>9){
        carry=1;
        res.push_back(lastDigit%10);
    }else{
        carry=0;
        res.push_back(lastDigit);
    }
    for(int i=n-2; i>=0; i--){
        int x=arr[i]+carry;
        if(x>9){
            carry=1;
            res.push_back(x%10);
        }else{
            carry=0;
            res.push_back(x);
        }
    }
    if(carry==1){
        res.push_back(1);
    }
    int i=res.size()-1;
    while(i>=0){
        if(res[i]==0){
            res.pop_back();
        }else{
            break;
        }
        i--;
    }
    reverse(res.begin(),res.end());
    return res;
}
