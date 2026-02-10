#include <iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if( arr[mid]> key ){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
        mid = start + (end -start)/2;
    }
    return -1;
}

int main(){
    int even[5] = { 2, 4, 6, 8, 10};
    int odd[5] = { 1, 3, 5, 7, 9};

    int evenres = binarySearch(even,6,10);
    int oddres = binarySearch(odd,5,1);
    cout<< evenres<< endl;
    cout<<oddres<<endl;

    return 0;

}