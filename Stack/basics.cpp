#include<iostream>
#include<stack>
using namespace std;


class Stack {
    // properties 
    public:
    int * arr;
    int top; 
    int size;
    // behaviour
    Stack (int s){
        size =s;
        arr = new int [size];
        top = -1;

    }
    void push(int x ){ //push operation
        if(top == size -1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;

    }
    void pop(){ //pop operation
        if(top == -1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;

    }
    int Top() { //peek operation
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    int Size(){ //stack size
        return top +1;

    }
    bool  empty(){ // stack empty or not
        return top == -1;
    }
    ~Stack(){   //destructor
        delete [ ] arr;
    }

};



int main(){
    // // creation of stack
    // stack <int> s;
    // // push operation
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);


    // if(s.empty()){
    //     cout<<"Stack is empty"<<endl;
    //     return 0;
    // }
    // else{
    //     cout<<"Stack is not empty"<<endl;
    // }

    // cout<<"Size of stack is :" << s.size()<<endl;
    // for(int i = 0; i<4; i++){
        
    //     cout<<s.top()<<" ";
    //     // pop operation
    //     s.pop();
        
    // }


    // cout<<endl;
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack is :" << s.Size()<<endl;
    for(int i = 0; i<4; i++){
        
        cout<<s.Top()<<" ";
        // pop operation
        s.pop();
        
    }

    
    return 0;
}