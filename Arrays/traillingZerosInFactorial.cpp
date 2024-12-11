/*
Problem Description
 
 

Given an integer A, return the number of trailing zeroes in A!.

Note: Your solution should be in logarithmic time complexity.



Problem Constraints
0 <= A <= 10000000



Input Format
First and only argumment is integer A.



Output Format
Return an integer, the answer to the problem.



Example Input
Input 1:

 A = 4
Input 2:

 A = 5


Example Output
Output 1:

 0
Output 2:

 1
*/
int Solution::trailingZeroes(int n) {
  int divisibleByTwoCount=0;
  int divisibleByFiveCount=0;
  for(int i=1; i<=n; i++){
      int x=i;
      while(x%2==0){
          divisibleByTwoCount++;
          x=x/2;
      }
      while(x%5==0){
          divisibleByFiveCount++;
          x=x/5;
      }
  }
  return min(divisibleByFiveCount,divisibleByTwoCount);
  //approach-2:
int res=0;
    while(n>0){
        res+=(n/5);
        n=n/5;
    }
    return res;
}
