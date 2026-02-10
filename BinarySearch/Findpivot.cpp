#include <iostream>
using namespace std;


int findPivot(int num[], int n){
    int s =0;
    int e= n - 1;
    
    while(s<e){
        int mid = (s + (e-s)) /2;
        if(num[mid] >= num[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        
    }
    return s;

}

int main(){
    int num[5]= {7,9,1,2,3};
    int n = 5;
    int res = findPivot(num,n);
    cout<<"Pivot index is : "<< res<<endl;
    return 0;
}