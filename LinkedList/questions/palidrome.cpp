#include <iostream>
// #include<map>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this-> data = d;
        this->next = NULL;
    }

};

void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    return;

}

void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}



void insertAttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    return;

}

bool checkPalidrome(vector<int >arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s] != arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}



bool isPalidrome(Node* head ){
    vector<int > arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp ->next;
    }
    return checkPalidrome(arr);

}

int main() {
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    
    
    insertAttail(tail, 2);
    insertAttail(tail,1);
    
   
    printNode(head);
    if(isPalidrome(head)){
        cout<<"Its a palindrome"<<endl;

    }else{
        cout<<"Not a palindrome"<<endl;
    }

    
    return 0;
}