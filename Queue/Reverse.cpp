#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
     q.push(3);
    q.push(4);
     q.push(5);
     int k=3;
     stack<int >s;

     for(int i = 0; i < k ; i++){
        s.push(q.front());
        q.pop();
     }

     
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    int t = q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    
    return 0;
}