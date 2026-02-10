#include <iostream>
using namespace std;

int main() {
    int num = 4;
    int *ptr = &num;
    cout<<"address  of ptr or num:"<< ptr << endl;
    num =num +1;
    cout<<"value at address :"<<*ptr<<endl;
    *ptr = *ptr +1;
    cout<<"value at address :"<<*ptr<<endl;

    // copying pointer
    int *q = ptr;
    cout<<"address using q :"<<q<<endl;
    cout<<"address  of ptr:"<< ptr << endl;
    
    



    // int *p = {nullptr}; // Initializing pointer to null
    // cout<<*p<<endl; // Dereferencing a null pointer leads to undefined behavior
    return 0;
}