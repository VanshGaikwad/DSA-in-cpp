#include <iostream>
using namespace std;


void reverseS(char name[],int n){
    int s= 0;
    int e= n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}

int getLength(char name[]){
    int count=0;
    for(int i =0; i<name[i]!='\0';i++)
    {
        count++;

    }
    return count;
}


int main() {
    char name[20];
    cout<<"enter your name"<<endl;
    cin>> name;
    cout<<"your name:";
    cout<<name<<endl;
    cout<<"Length of string :";
   cout<< getLength(name)<< endl;

   cout<<"reversed string: ";
    reverseS(name,getLength(name));
    cout<<name<<endl;

    return 0;
}