// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;
//stack implementation using linkedlist
class Node{
    public:
      int data;
      Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
}*head=NULL;
void push(int num){
      
    if(head==NULL){
        Node* newn=new Node(num);
        head=newn;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next; //iterating to the last node
    }
    temp->next=new Node(num);
    
}
void pop(){
    if(head==NULL){
        //no elements
        cout<<"stack is empty"<<endl;
        return;
    }
    Node* del=head;
    if(head->next==NULL){
        head=NULL;
        return;
    }
    //two or more nodes
    Node* temp=head->next;
    Node* delo=head;
    while(temp->next!=NULL){
        temp=temp->next; //iterating to the last node
        delo=delo->next;
    }
    // cout<<" check: "<<temp->data<<","<<delo->data<<endl;
    delo->next=NULL;
    delete(temp);
    
}
int peek(){
    //to see the last element of the ll
    Node* temp=head;
    if(head==NULL){
        cout<<"empty stack"<<endl;
        return -1;
    }
    else{
        //elements hai
        while(temp->next!=NULL){
            temp=temp->next;
        }
        // cout<<temp->data;
        return temp->data;
    }
}
bool empty(){
    if(head==NULL){
        return true;
    }
    return false;
}

int main() {
    push(12);
    push(22);
    push(92);
    push(2);
    push(11);
    push(212);
   
    pop();
    pop();
    
    cout<<"top element: "<<peek()<<endl;
    pop();
    pop();
    pop();
    pop();
    cout<<"top element: "<<peek()<<endl;
    if(!empty()){
        //false: empty nahi hain
        cout<<"stack is not empty "<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
    
    
   
}