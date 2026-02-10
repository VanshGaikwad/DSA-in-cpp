#include<iostream>
using namespace std;

bool isSorted(int arr[], int n  ){
    // base case
    if(n ==1 || n == 0) return true;

    if(arr[0] > arr[1]) return false;
    else{
    bool ans = isSorted(arr+1,n-1);
    return ans;
    }
}


int main(){
    int arr[5]= {1,2,3,4,5};
    cout<< "Array is sorted or not: "<< isSorted(arr,5)<< endl;
    return 0;
}