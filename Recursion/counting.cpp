#include <iostream>
using namespace std;

void count(int n){
    // base case
    if (n == 0) return;
    cout<<n <<endl;
    // recursive case
    

    // if i pt recursive call here, it will print in reverse order
    count(n-1);
    // else it prints in normal order if placed before the recursive call

}


int main() {
    int n =5;
    count(n);
    return 0;
}