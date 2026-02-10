#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num[3][4] = {{3,4,11},{2,12,1},{7,8,7}};
    vector <int > arr;
    
    for(int i = 0; i < 3; i++){
        int sum =0;
        for(int j = 0; j < 3; j++){
            // sum += num[i][j]; sum row wise
           sum += num[j][i]; //sum column wise
        }
        
         arr.push_back(sum);

    }
    for(int i : arr){
        cout<< i <<" ";
    }
    cout<< endl;
    return 0;
}