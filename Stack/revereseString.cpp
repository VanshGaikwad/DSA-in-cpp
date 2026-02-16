#include<iostream>
#include <stack>
using namespace std;


int main(){
    stack<char>s;
    string str;
    string rev = "";
    cout<<"Enter a string:";
    cin >> str;
    for(int i = 0; i< str.length(); i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        rev += s.top();
        s.pop();
        
    }
    cout<<rev;

}