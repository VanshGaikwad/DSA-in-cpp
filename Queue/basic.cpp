#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int > q;
    q.push(11);
    q.push(12);
    q.push(13);
    // front of queue
    cout<<"front of queue: "<<q.front() <<endl;
    cout<<"rear of queue" << q.back()<<endl; //rear

    cout<<"size of queue is :" <<q.size()<<endl;
    q.pop();
    cout<<"size of queue is :" <<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty : "<<endl;
    }
    
    
    return 0;
}