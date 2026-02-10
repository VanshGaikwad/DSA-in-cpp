#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    for(int i = 1; i < n; i++){
        // for round 1 to  round n-1
        bool swapped = false;

        for(int j = 0; j<n-i; j++){
            // process element till n - i
            if(arr[j] > arr[j+1]){
                // swap
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}