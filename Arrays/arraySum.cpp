/*
Problem Description
 
 

You are given two numbers represented as integer arrays A and B, where each digit is an element.
 You have to return an array which representing the sum of the two given numbers.

The last element denotes the least significant bit, and the first element denotes the most significant bit.

Note : Array A and Array B can be of different size. ( i.e. length of Array A may not be equal to length of Array B ).



Problem Constraints
1 <= |A|, |B| <= 105
0 <= Ai, Bi <= 9


Input Format
The first argument is an integer array A. The second argument is an integer array B.


Output Format
Return an array denoting the sum of the two numbers.


Example Input
Input 1:
A = [1, 2, 3]
B = [2, 5, 5]
Input 2:

A = [9, 9, 1]
B = [1, 2, 1]


Example Output
Output 1:
[3, 7, 8]
Output 2:

[1, 1, 1, 2]
*/
vector<int> Solution::addArrays(vector<int> &num1 ,vector<int> &num2) {
    vector<int>res;
    int n=num1.size();
    int m=num2.size();
    int i=n-1, j=m-1;
    int carry=0;
    while(i>=0 || j>=0){
        int a=0 ,b=0;
        if(i>=0){
            a=num1[i];
        }
        if(j>=0){
            b=num2[j];
        }
        int x= a+b+carry;
        if(x>9){
            x=x%10;
            res.push_back(x);
            carry=1;  
        }else{
            res.push_back(x);
            carry=0;
        }
        i--;
        j--;
    }
    if(carry==1){
        res.push_back(1);
    }
    reverse(res.begin(),res.end());
    return res;
}
