#include<iostream>
using namespace std;

int main(){
    int arr [5] ={1,2,3,4,5};
    int low = 0;
    int high = size(arr)-1;

   while(low<high){
    // int temp = arr[low];
    // arr[low] = arr[high];
    // arr[high]=temp;
    swap(arr[low],arr[high]);
    low++;
    high--;

   }
   for (int i =0 ;i< size(arr); i++){
    cout<< arr[i] << " ";
   }
}