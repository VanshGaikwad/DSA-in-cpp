// Priority queue is a queue which first element is always greatest
#include <iostream>
#include <queue>
#include<vector>
using namespace std;

int main(){
    // max heap
    priority_queue<int> maxi;
    // min heap
    priority_queue<int ,vector <int >,greater<int>> min;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n=  maxi.size();
    for(int i=0 ; i<n;i++){
        cout<< maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    min.push(1);
    min.push(3);
    min.push(2);
    min.push(0);

     int m=  min.size();
    for(int i=0 ; i<m;i++){
        cout<< min.top()<<" ";
        min.pop();
    }cout<<endl;

    cout<<"khali he kya bhai:"<<min.empty()<<endl;




    return 0;
}