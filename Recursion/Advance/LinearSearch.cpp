#include <iostream>
using namespace std;

bool found(int arr[], int n, int target){
    if(n==0) return false;
    if(arr[0] == target ){
        return true;
    }
    else{
   bool remainingPart = found(arr+1,n-1,target);
   return remainingPart;
   }
    
}


int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int target = 5;
    if(found(arr,n,target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}