#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j ; 
        for(j =i-1; j >= 0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
                }
            
        }

        arr[j+1] = temp;
    }

    // print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}