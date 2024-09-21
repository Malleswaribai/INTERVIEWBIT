/*
number  binaryNumber  decimalNumber
0         0            2^0=1
1         1            2^0=1
2         1 0          2^1+2^0=3
3         1 1          2^0+2^1=3
4         1 0 0        2^0+2^1+2^2=7
5         1 0 1        2^0+2^1+2^2=7
6         1 1 0        2^0+2^1+2^2=7
7         1 1 1        2^0+2^1+2^2=7
// here in every odd numbers last binary digit is 1
-> AND operator("&"): in this it gives true if both conditions true means 1,1 it gives 1
-> OR operatot("|"): it gives true if atleast one condtion is true means 1, 0 gives 1 and 0,1 gives 1 and 1,1 gives 1
-> XOR operator("^"): it gives in case of same number xor gives zero means 1, 1 and 0,0 gives 0 , and in case 1,0 and 0,1 gives 1
-> NOT operator("!"): it gives true if it false and vise versa
-> Left shift operator("<<"): it acts on binary numbers means left shift of any number for k times gives binary number and k zeros
   ex: 3<<1 gives 1 1 0, 7<<2 gives 1 1 1 0 0
-> Right shift operator(">>"): it acts on binary numbers means right shift of any number for k times gives removes k numbers from right
   ex: 3>>1 gives 1 1 , 7>>2 gives 1 , 7>>1 gives 1 1
->note: using left we can obtain power of two
  1<<0 gives 1 ->1
  1<<1 gives 1 0->2
  1<<2 gives 1 0 0 ->4
  1<<3 gives 1 0 0 0 -> 8
  1<<4 gives 1 0 0 0 0 -> 16
   and so on gives 1<<n=2^n

->7th 6 5 4 3 2 1 0 -> indexing in binary number is from right to left
   1  0 1 1 1 0 1 1
   /              \
 MSB              LSB->least and most significant bits
 * set -1 bit
 unset means - 0 bit


*/
#include<bits/stdc++.h>
using namespace std;
void binaryNumber(int n){
   for(int i=n+1; i>=0; i--){
      cout<<((n<<i)&1); // it gives binary number
   }
   cout<<endl;
}
int main(){
   cout<<INT_MAX<<endl;
   int a=(1LL<<31)-1;// it gives 2^31-1 and it is for signed integer here it is 
   //taking only 31 bit instead of 32 y because one bit is alredy reserved in the memory for sign

   cout<<a<<endl;
   unsigned int b=(1LL<<32)-1;// it takes 32 because it only stores positive integer
   cout<<b<<endl;


//set and unset

//set bit or not
int a=9;
int i=1;
if((a& (1<<i))!=0){
   cout<<"set bit";
}else{
   cout<<<"unset bit";
}
cout<<endl;

//set a ith bit as a set bit 
binaryNumber(a | (1<<i));
// set a ith bit as unset bit
 binaryNumber(a&(~(1<<i)));// here we are unsetting third bit
binaryNumber(~a); // it makes all bits changed as 1 as 0 and 0 as 1
//toggle ith bit it means make 1 bit as 0 bit and vise versa
binaryNumber(a^(1<<i));

// count set bits
for(int i=31; i>=0; i--){
   if((a& (a<<i))!=0){
      ct++;
   }
}
cout<<ct>>endl;
//inbuilt function for set bit count
cout<<__builtin_popcount(a)<<endl;
//inbuilt function for long numbers set bit count
cout<<_builtin_popcountll(a)<<endl;


binaryNumber(5);

}