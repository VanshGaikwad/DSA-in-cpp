#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]= {3,4,5,6};
    int Max = INT_MIN;
    int Min = INT_MAX;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i =0 ;i<size(arr); i++){
        // if(arr[i]> Max){
        //     Max = arr[i];
        // }
        // if(arr[i]<Min){
        //     Min = arr[i];
        // }
        maxi =max(maxi,arr[i]);
        mini = min (mini ,arr[i]);
    }
    cout<<maxi<<endl;
    cout<<mini << endl;
    // int max = *max_element(arr,arr+size(arr));
    // int min = *min_element(arr,arr+size(arr));
    // cout << "max: " << max << endl;
    // cout << "min: " << min << endl;
    return 0;
}   