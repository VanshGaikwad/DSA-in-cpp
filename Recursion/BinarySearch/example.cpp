#include <iostream>
using namespace std;

bool binsearch(int arr[], int s , int e , int k){
    
    // base case 
    // element not found
    if(s>e) return false;
   
    
    int mid = s + (e -s) /2;
     // element found
    if(arr[mid] == k) return true;

    if(arr[mid] < k ){
       return binsearch(arr,mid+1,e,k);
    }
    else{
      return  binsearch(arr,s,mid-1,k);

    }
}




int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int target = 9;
    int size = 5;
    if(binsearch(arr,0,size-1,target)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}