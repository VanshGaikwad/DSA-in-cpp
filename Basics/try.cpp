#include <iostream>
#include <algorithm>
using namespace std;

void update (int vansh[],int size){
    vansh[0] = 5;
    cout<< "Inside function"<<endl;
    for(int i = 0; i < size; i++){
        cout<< vansh[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int arr[5]= {3,4,5};
    // function calling 
    
    cout<< "function call"<<endl;
    update(arr,5);
    cout<< "after function call"<<endl;
    for(int i = 0; i < size(arr); i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    reverse (arr,arr+size(arr));
    for(int i = 0; i < size(arr); i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}