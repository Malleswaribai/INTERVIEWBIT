/*
Problem Description

You are given an integer N and the task is to reverse the digits of the given integer. Return 0 if the result overflows and does not fit in a 32 bit signed integer


Look at the example for clarification.



Problem Constraints
N belongs to the Integer limits.



Input Format
Input an Integer.



Output Format
Return a single integer denoting the reverse of the given integer.



Example Input
Input 1:

 x = 123


Input 2:

 x = -123


Example Output
Output 1:

 321


Ouput 2:

 -321
*/
int Solution::reverse(int n) {
    long int num=n;
    long long res=0;
    bool flag=false;
    if(n<0){
        flag=true;
        num=num*-1;
    }
    while(abs(num)>0){
        int lastDigit=num%10;
        res=res*10+lastDigit;
        num=num/10;
    }
    if(flag==true){
        res=res*-1;
    }
    if(res<INT_MIN || res>INT_MAX){
        return 0;
    }
    return res;
}

}
