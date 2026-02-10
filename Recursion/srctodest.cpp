#include <iostream>
using namespace std;

void reach ( int src ,int dest){
    cout<< "Source: "<<src<< ", Destination: "<<dest<<endl;
    if (src == dest) {
        cout<<"Destination reached "<<endl;
        return;
    }
    src++;
    reach(src,dest);
}


int main() {
    int src=1, dest=10;
    reach(src,dest);
    return 0;
}