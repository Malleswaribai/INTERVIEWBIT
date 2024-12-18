/*
recursion: it is a approach which calls a function within the same function
*/
//print 1 to n numbers
void fun(int x){
    if(n==0) return;
    fun(n-1);
    cout<<x<<" ";
}
// print from n to 1
void fun2(int x){
    if(n==0) return;
    cout<<x<<" ";
    fun2(n-1);
}
int main(){
    int n;
    cin>>
    fun(n);
    fun2(n);
}

// fibonacci number
int fib(int n){
    if(n<=1) return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
   int fib(1)=1,fib(0)=1;
   int n;
   cin>>n;
   int ans=fib(n);
   cout<<ans;
}
                                                             8fib(5)
                                                        /             \
                                                    5fib(4)              3fib(3)
                                                   /          \
                                             3fib(3)            2fib(2)
                                              /       \               /     \
                                          2fib(2)      fib(1)1    1 fib(1)  fib(0)1
                                          /     \
                                       1 fib(1)  fib(0)1