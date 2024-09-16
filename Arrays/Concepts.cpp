
#include <bits/stdc++.h>
// this is a header file, which includes pre writtened functions/methods

using namespace std;

int main(){
    /*
    code excecution
        It will be done line after line
        It will alwasys starts from the first line of main function till the return of main function
    */ 
    /*
    Data structures ,
    * It is a form in where we can store the data. 
    * Differenct data structures gives us different benifits.
    */
    /*
    Algorithm
    * It is a set of instructions which can excuted in a pirticular manner to give a expected result for the given input.
    * a single problem may have multiple algorithms which can resolve it.
    */

    // int, string,char,float, boolean, double,long, pointers. 
    // int x; [reserved for sign , , , , , , , , , , , , , , , , , , ] ; signed integer
    // long x; == 64bits
    // [1 ,, ,, ,, ,, ,]
    // 64
    // 2^63 - 1  === LONG_MAX
    // unsinged long 3^64-1 ; 
    // return 0;
    // int x, y; overflow, 
    // cin>>x>>y;
    // long z = x*1ll*y;
    // z*=y;
    // cout<<z<<endl;
    // long long x, y; 
    // __int128 x = 20;
    // // cout<<x;
    // int y = x;
    // cout<<y;
    // string s; 
    // // it is list of contigious charecers which are stored in memory , a string can store at max of 10^5 charecters ,
    // int arr[n]; // arr is a list of contigious integers which are stored in memory, a array can store at max of 10^5 integes in it.
    // // 10^5 * 32 ; 
    // char arr[n];
    /*
    pointers
        What is a pointer? 
        * Pointer is a derived data type which can store the address of a variable and point to that variable which is stored in memory. 
        * Pointers can point to multiple data types such as int, char, float, arr, double,boolean, struct...etc . 
        a pointer which can point to a int data type can be declared as int* , for a char it is char* ... etc. 
        for an array it is int* only
    */
    int x = 10; // a memory allocation will be done when we create a variable, and we are assigning its value as 10 ; 
    int y = x; // a new memory will be allocated to variable y , and its value will be same as x;
     y++; // it will increase the value of y by 1. 
      cout<<x<<','<<y<<endl;
      int *p1 = &x;  // here a new memory will be created to pointer p and pointer p will store the address of x; 
    // cout<<p1<<','<<*(&x)<<endl;
    *p1 = *p1+1; // here this line is updating the value of the variable whose address is stored in p1; 
     cout<<x<<endl;// here p1 is pointing to x , this type of assignment is know as reference by address. 
    // int x = y ;this type of assignment is know as reference by value.
    int *p2 = &y; 
    int **p3 ; // it is a pointer to pointer of integer data type;  => int* *p3; 
    p3 = &p1 ; 
    cout<<*p3<<','<<**p3<<','<<&x<<','<<&y<<endl;
    p3 = &p2; 
    cout<<*p3<<','<<**p3<<','<<&x<<','<<&y<<endl;
    /*
    
    */
int arr[] = {1,2,3,4,5,6,7,8,9} ; 
    //array itself is a pointer
    // int *arr = {1,2,3,4,5,6,7,8,9} ; the both lines are same; 
    
    int *ptr = arr ; 
    cout<<ptr[0]<<endl;
    *(ptr+1) = 100;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;
    
    cout<<"vectors"<<endl;
    /*
    vectors := it is a enhanced version of arrays. 
    it's size is changable at runtime. 
    vector can store anything, data types, derived data types,
    vector<map<map<int,int>,int> >  we can store anything. 
    it has same properites as array except size .
    declaration : vector<data_type> v; 
    */
    // vector<int> v; 
    // insert an element at the back => v.push_back(x) time complexity o(1)
    // insert an element at the front => v.push_front(x) time complexity o(n)
    // insert an element at an index => v.insert(index, value) time complexity o(n);
    // remove the last element => v.pop_back(); time complexity o(1);
    // remove the front element => v.pop_front(); time complexity o(n);
    // remove an element at an index =>

se(iterator or index) ; 
    // auto it = v.begin() , it = v.end(); v.erase(v.beging()+2);  it will erase the third element; 
    
    // it has sort function; 
    // sort(v.begin(),v.end()); the two paramenters are the starting range including , and the last range excluding. 
    // reverse(v.begin(),v.end()) ; reverse the array with in the given range. 
    
    
    vector<pair<int,int>> v = {{1,2},{1,0},{5,100},{2,10} , {5,50} , {1,-2}};
    // sort the above array with respctive of first element , if the first element is same then it shold be in decending order with respctive to second element
    auto cmp = & {
        if(a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first ;
    };
    sort(v.begin(),v.end(),cmp);
    for(auto &x: v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    vector<int> v1 = {1,2,1,3,4,1,6,6,2,3,3,3,5,7,8,1,7,8,8};
    // sort the elements in such a way that the element which is repeated more should appear at the first; 
    unordered_map<int,int> m;
    for(auto &x: v1) m[x]++;
    
    auto cmp2 = &{
        if(m[a] == m[b]){
            return a<b;
        }
        return m[a]>m[b];
    };
    
    sort(v1.begin(),v1.end(),cmp2);
    
    for(auto &x:v1) cout<<x<<' ';
    cout<<endl;
    
   
   
//accumulate: for finding sum of elements in array we written it as accumulate(arr.begin(),arr.end(),0);
    /*
    unordered_set : = it is a data strucutes which will store a single occurence of a data no matter how many times it got repeated. 
    in orderede set, we can tell if one element is present in a set or not, we can insert an element, deleate an element and tell the existance of an element. 
    time complexity o(1);
    */
    
    unordered_set unSet ; 
    unSet.insert(1); 
    unSet.insert(2);
    unSet.insert(3); 
    unSet.insert(1);
    unSet.insert(1);
    unSet.insert(2);
    cout<<"unrodered set"<<endl;
    for(auto &x: unSet) {
        cout<<x<<",";
    }
    cout<<endl;
    // to find an element; 
    auto it = unSet.find(1);
    if(it == unSet.end()){
        // element does not exist 
        cout<<"element does not exists"<<endl;
    }else {
        unSet.erase(it) ;  // s.erase(1) also works , if 1 exists it will erase or it will leave. 
        cout<<"removed an element from the set"<<endl;
    }
    
    /*
        It is same for set data strucure but the difference is the data is stored in a sorted format , 
        auto it = s.begin() , will point to smallest eleemnt; 
        it++ , will give the next smallest element in the set.
        time complexity for every operation is log(n) since it is maintaining order. 
    */
    
    /*
        map is a data strucure which will store the data in key value pair, here the value we store must be related to key ,so that in time of needed
