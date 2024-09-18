/*
Problem Description
 
 

Implement pow(x, n) % d.
In other words, given x, n and d,
Find (xn % d)
Note that remainders on division cannot be negative. In other words, make sure the answer you return is non-negative integer.


Problem Constraints
-109 <= x <= 109
0 <= n <= 109
1 <= d <= 109


Example Input
Input 1:
x = 2
n = 3
d = 3
Input 2:
x = 5
n = 2
d = 6


Example Output
Output 1:
2
Output 2:
1


Example Explanation
Explanation 1:
23 % 3 = 8 % 3 = 2.
Explanation 2:
52 % 6 = 25 % 6 = 1.


*/

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(x == 0) return 0;
    if(n==0) return 1;
    int halfPower=pow(x, n/2,d);
    bool isOdd=n%2;
    long res=( halfPower*1LL*halfPower)%d;
    if(isOdd) {
        res *= x;
        res=res%d;
    } 
    if(res < 0) res+=d;
    return res;
}

