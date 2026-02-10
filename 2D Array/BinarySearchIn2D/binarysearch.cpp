#include <iostream>
#include <array>
using namespace std;

int main() {
   array<array<int,3>,3> arr ={{{1,2,3},{4,5,6},{7,8,9}}};
    int row = arr.size();
    int col = arr[0].size();
    int target = 10;
    int s = 0;
    int e = (row * col )-1;
    int mid =  s + (e - s ) /2;
    while(s<=e){
        int element = arr[mid/col][mid%col];
         if (element == target) {
            cout<< "target found"<<endl;
            return 1;
         }
        else if(element < target){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid =  s + (e - s ) /2;
    }
    cout<<"Target not found"<<endl;
    return 0;


}