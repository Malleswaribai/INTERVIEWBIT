/*
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next; 
};
int main(){
    // Linked list 
    // it is a way of storing data and those data points are linked one to another to form a connected data point series. 
    // List of nodes each node contains data and the pointer to the next node. 
  -> class: it is a blueprint for the object, and it is not real life entity
  ->object: it a instance of class , and it is a real life entity
    
    Node *n1; // new Node() it is an contructor to the class. It will create an instance of that object and will return the address of that instance. 
    n1 = new Node(); 
    Node *n2 = new Node(), *n3=new Node(),*n4=new Node(), *n5=new Node();
    n1->data = 1, n2->data = 2, n3->data = 3, n4->data = 4, n5->data = 5;
    n1->next = n2 ; // 
    n2->next = n3;
    n3->next = n4; 
    n4->next = n5;
    n5->next = NULL;
    auto cur = n1; 
    while(cur) {
        cout<<cur->data<<endl;
        cur= cur->next;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next; 
};
int main(){
    Node *n1; 
    n1 = new Node(); 
    Node *n2 = new Node(), *n3=new Node(),*n4=new Node(), *n5=new Node();
    (*n1).data=5; // the same statement can be writened as like this n1->data ;
    // cout<<;
    Node x = *n1;// it a pointer for the instance
    x.data = 10;
    Node *dummy = n1;
    dummy->data = 15;
    cout<<x.data<<" "<<n1->data<<" "<<dummy->data<<endl;
    
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next; 
};
int main(){
    int n ; 
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n;i++) cin>>v[i];
    
    // create an linked list using this vector .
    // Node *head = NULL;
    // for(int i = 0; i<n;i++) {
    //     Node *temp = new Node();
    //     temp->data = v[i]; 
        
    //     if(head == NULL) {
    //         head = temp; 
    //     } else {
    //         auto cur = head;
    //         while(cur->next) {
    //             cur = cur->next;
    //         }
    //         // loop will stop at last node; 
    //         cur->next = temp; 
    //     }
    // }
 => time complexity is O(n*n)
    
    Node *head = NULL, *last = NULL; // it will have stored first and last pointers at the same time.
    
    for(int i = 0 ;i<n;i++) {
        auto temp = new Node() ;
        temp->data = v[i];
        if(head == NULL) {
            head = temp;
            last = temp;
        } else {
            last->next = temp;
            last = temp;
        }
    }
    
    auto cur = head;
    cout<<"I am linked list"<<endl;
    while(cur) {
        cout<<cur->data<<endl;
        cur = cur->next;
    }
    
    return 0;
}

*/