// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;
//operations on stack
//push
//pop
//top
//empty
//size

int main() {
    //making a stack from stl
    stack<int>stk;
    stk.push(1);
    stk.push(4);
    stk.push(340);
    stk.push(1213);
    stk.push(11);
    
    cout<<"top element of stack: "<<stk.top()<<endl;
    // stk.pop();
    // stk.pop();
    cout<<"top element of stack: "<<stk.top()<<endl;
    
   
}