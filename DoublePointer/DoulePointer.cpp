#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;
    
    cout<< ptr<<endl;
    cout<< **ptr2+1<<endl;
    cout<<i;
    return 0;
}