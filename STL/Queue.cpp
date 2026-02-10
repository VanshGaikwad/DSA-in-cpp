// Queue -> first in first out
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <string > q ;
    q.push("love");
    q.push("babbar");
    q.push("vansh");
    cout<<"size before pop:"<<q.size()<<endl;
    cout<<"First element:" << q.front()<<endl;
    q.pop();
    cout<<"after pop front element is :" << q.front()<<endl;
    cout<<"size after pop:"<<q.size()<<endl;


}