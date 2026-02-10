#include <iostream>
using namespace std;

void print(int n , string arr[]){
    if(n == 0) return;
    int digit = n% 10;
    n = n /10;
    print(n,arr);
    cout<<arr[digit]<<" ";
}



int main() {
    int n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout<<"Enter number:";
   
    cin>>n;
    print(n,arr);
    return 0;
}