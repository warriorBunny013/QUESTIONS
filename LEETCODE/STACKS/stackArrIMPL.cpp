// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;
//stack implementation using array
//stack class
class Stack{
    public:
      //properties
      int *arr;
      int top;
      int size;
    //behavior
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    //stack properties
    void push(int num){
        if(size-top>1){
            top++;
            arr[top]=num;
        }
        else{
            cout<<"stack overflow!!!"<<endl;
        }
    }
    void pop(){
        if(top!=-1){
            top--;
        }
        else{
            cout<<"stack underflow!!"<<endl;
        }
    }
    bool empty(){
        if(top!=-1){
            //empty nahi hai
            return false;
        }
        else{
            //empty hain
            return true;
        }
        
    }
    int peek(){//returns the top element in the stack
        if(top!=-1){
            //maatlab top exist karta hai
            return arr[top];
        }
        else{
            cout<<"empty stack!!"<<endl;
            return -1;
        }
        
    }
};
int main() {
    Stack st(5); //created stack of size 10
    st.push(12);
    st.push(19);
    st.push(435);
    st.push(5);
    st.push(51);
    st.push(56);
    
    cout<<"top element of the stack: "<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<"top element of the stack: "<<st.peek()<<endl;
    st.pop();
    st.pop();
    if(!st.empty()){
        //false: empty nahi hain
        cout<<"stack is not empty "<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
    
    
   
}