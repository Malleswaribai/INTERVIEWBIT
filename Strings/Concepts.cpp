/*
String: it a collection of characters.
->in strings we always take zero based indexing
->getline(cin,string_name) : it takes whole string including 2 or more strings including spaces
->ASCCI values : A->65 and a->97
->if u want to insert a charater in string we use .push_back(char);
->but if u want to insert a string we just append that string means resString+=UpdatedString;
->
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();// we moving the curser to the next line
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }
    //

    char c='a';
    cout<<(int)c<<endl; // it is called typecasting it is giving assci value of c;
    char c1='g';
    cout<<a-g<<endl; // it gives asscci value;
    

    //


}