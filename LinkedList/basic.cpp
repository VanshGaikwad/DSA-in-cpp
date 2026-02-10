#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor

    Node(int data){
        this -> data = data;
        this -> next  = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<data<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    // new node crated
    Node* temp  = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail (Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}
//printing
void print (Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
    // insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt =1;
    while (cnt < position-1 ){
        temp = temp->next;
        cnt++;
    }
    //inserting at last
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }
    // creating node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next= temp->next;
    temp -> next = nodeToInsert;
}


void deleteNode(Node* &head,int position ){
    // deleting first or start node
    if(position == 1){
      Node* temp = head;
        head = head -> next;
        temp -> next =NULL;
        // memory free start node 
        delete temp;

    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt <= position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next =NULL;
        delete curr;

    }
}

int main() {

    //create new node 
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    // head pointed to node 1
    Node* head =node1;
    // tail pointer
    Node* tail = node1;
    print(head);
    // print (head);
    // insertAtHead(head , 12);
    // print (head);
    // insertAtHead(head,15);
    insertAtTail(tail,12);
    print (head);
    insertAtTail(tail,15);
    print(head);

    InsertAtPosition(head,tail,4,22);
    print(head);

    cout<< "head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

    deleteNode(head,1);
    print(head);
    
    
    return 0;
}