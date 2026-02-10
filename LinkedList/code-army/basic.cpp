#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node (int value){
        data = value;
        next = NULL;
    }
};

void insertData(int data,Node* &head){
    if(head == NULL){
        head = new Node(data);
    }
    else{
        Node* temp ;
        temp =new Node(data);
        temp -> next =head;
        head = temp;
    }

}

void printNodes(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
         temp = temp -> next;
    }
    cout<<endl;
   
}

void insertAtEnd(int data, Node* &head ){
    Node* tail = head;
    if(head == NULL){
        head = new Node (data);
    }
    else{
        while(tail->next != NULL){
            tail = tail -> next;
        }
        Node* temp = new Node(data);
        tail->next = temp;

    }
}

int main() {
    // create a node with data 4 and null address of data store in head
    Node* head = new Node (4);
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    insertData(5,head);
    printNodes(head);
    insertData(6,head);
    printNodes(head);

    insertAtEnd(3,head);
    printNodes(head);






    return 0;
}