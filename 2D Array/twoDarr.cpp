#include <iostream>
using namespace std;

int main() {
    // how to create a 2D array dynamically
    // input and output
    // memory free kasie karani hai
    // using dynamic memory allocation for a 2D array
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i =0; i<n; i++){
        arr[i] = new int[n];
    }

    // creation done
    for(int i=0; i<n; i++ ){
        for(int j =0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // printing the 2D array
     for(int i=0; i<n; i++ ){
        for(int j =0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
    }

    cout<<endl;
    cout<< arr[1][0]<<endl;

    // releasing the memory
    for(int i =0; i<n;i++){
        delete [] arr[i];   
    }
    delete []arr;

    return 0;
}