#include <iostream>
using namespace std;

int main(){
    int n;
    const long long m = 1000000007;
    long long res = 1;
    cout<<"Enter a number:";
    cin>>n;
    
    for(int i = 1; i<=n;i++){
        res = (res*i) %m;

    }
    cout<< "Factorial of "<<n<<" is "<<res<<endl;
    return 0;
    

}