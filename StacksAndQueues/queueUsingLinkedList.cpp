/*
class Node{
    constructor(x){
        this.val=x;
        this.next=null;
    }
}
class Queue{
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
first(){
    if(n>0){
        return this.first.val;
    }
    return null;
}
 pop(){
   if(n>0){
       if(this.first==this.last){
           this.first=null;
           this.last=null;
       }else{
           let cur=this.first;
           this.first=this.first.next;
           cur=null;
       }
   }
    this.n--;
}
let q=new Queue();
q.push(1);
q.push(2);
q.push(3);
q.push(4);
console.log(q.first());//1
q.pop();
console.log(q.first());//2

*/