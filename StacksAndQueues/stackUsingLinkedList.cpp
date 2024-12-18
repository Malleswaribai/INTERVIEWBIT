/*
class Node{
    constructor(x){
        this.val=x;
        this.next=null;
    }
}
class Stack{
    constructor(){
        this.n=0;
        this.first=null;
        this.last=null;
    }
}
push(x){
     let temp=new Node(x);
    if(this.first==null){
        this.first=temp;
        this.last=temp;
    }else{
        this.last->next=temp;
        this.last=temp;
    }
    this.n++;
}
top(){
    if(this.n>0){
        return this.last.val;
    }else{
        return null;
    }
}
 pop(){
   if(n>0){
       if(this.first==this.last){
           this.first=null;
           this.last=null;
       }else{
           let cur=this.first;
           while(cur->next!=this.last){
               cur=cur->next;
           }
           cur.next=null;
           this.last=cur;
       }
   }
    this.n--;
}
let s=new Stack();
s.push(1);
s.push(2);
s.push(3);
s.push(4);
console.log(s.top());//4
s.pop();
console.log(s.top());//3



*/