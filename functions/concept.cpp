/*
function: it has a set of instructions which are bundled and executed to give the output for the given input
*/
void fun3(){
    cout<<"iam fun3 with 3"<<endl;
}
void fun2(){
    cout<<"iam fun2 with 1"<<endl;
    fun3();
    cout<<"iam fun2 with 2"<<endl;
}
void fun1(){
    cout<<"iam fun1 with 1"<<endl;
    fun2();
    cout<<"iam fun1 with 2"<<endl;
    fun3();
}
int main(){
    cout<<fun1()<<endl;
    return 0;
}