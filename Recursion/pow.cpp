#include <iostream>
using namespace std;

int power(int n){
    // base case
    if(n == 0) return 1;
    // recursive relation
    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;
    return biggerProblem;

    // shorter way
    // return 2*smallerProblem;
    // or
    // return 2*power(n-1);
}




int main() {
    int n ;
    cout << "Enter the power of 2 you want to calculate: ";
    cin >> n;
    int ans = power(n);
    cout << ans << endl;
    return 0;
}