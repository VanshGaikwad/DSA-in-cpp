#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }

    ~Node() {
        cout << "memory is free for node with data " << data << endl;
    }
};

// insert after given element
void insertNode(Node* &tail, int element, int d) {
    // empty list
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }

    // non-empty list
    Node* curr = tail;
    do {
        if (curr->data == element)
            break;
        curr = curr->next;
    } while (curr != tail);

    if (curr->data != element) {
        cout << "Element not found" << endl;
        return;
    }

    Node* temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}

// print circular list
void printNode(Node* tail) {
    
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

void deleteNode(Node* &tail,int value){
    // empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

  
    else{
        // non empty
        // assuming that value is present in linked list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr ->next;
        }
        prev -> next = curr -> next;
        // 1 node linked list 
        if(curr = prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}

int main() {
    Node* tail = NULL;

    insertNode(tail, 0, 3);   // first node
    printNode(tail);

    insertNode(tail, 3, 10);  // insert after 3
    printNode(tail);

    insertNode(tail, 10, 20); // insert after 10
    printNode(tail);
    deleteNode(tail,20);
    printNode(tail);

    return 0;
}
