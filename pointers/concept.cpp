/*
->in computer memory data stored int the form of bits or bytes
->bits:it is smallest unit of memory 
->1byte=8bits and each byte has address, if u try to print in c or c++ it will store in the form of hexadecimal form
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    //pointers: it will store the addrress of any inteter
    int x=9;
    int *p;// it will store the address of x
    p=&x;
    cout<<*p<<endl;// this is we should read as value at p,it will give the value
    cout<<&x<<endl;// it will give the address startinng address of x in hexadecimal form
    *p=10;
     cout<<*p<<endl;
    p=p+1;// it will add address of data type here integer so it will add 4 bytes
    cout<<p<<endl;
    */
    /*
    int a[10];// it will store conntigous in the memory
    cout<<a<<endl;// it will give the starting address of the std::array
    cout<<*a<<endl;// it will give the value of a[0]
    //a->&a[0]
    a=a+1;// it will give the address of next element in array
    cout<<a<<endl
    cout<<*a<<endl;
    return 0;
    
    */
    //double pointers
    int *p;
    int **pp;// it will store the addrsss of integer pointer
    int x=4;
    p=&x;
    cout<<p<<endl;// it gives the address of x
    pp=&p;
    cout<<*pp<<endl;//it gives the address of x
    cout<<**pp<<endl;// it gives the value of x
    return 0;
    
}