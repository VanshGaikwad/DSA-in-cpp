#include  <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int >v ={1,2,3,4};

    int s = 0;
    int e = v.size()-1;
    while (s <=e){
        // swap
        // swap(v[s],v.[e]);
        int temp = v.at(s);
        v.at(s) = v.at(e);
        v.at(e) = temp;
        s++;
        e--;
    }
    for(auto i : v){
        cout<< i<< " ";
    }
    cout<<endl;

    // using one line onyl
    // reverse(v.begin(),v.end());
    for(auto i : v){
        cout<< i<< " ";
    }
    cout<<endl;
    return 0;
}