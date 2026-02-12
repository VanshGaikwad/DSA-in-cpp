#include <iostream>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert node at end
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void insertAtTail (Node* &tail,Node* curr){
    tail -> next = curr;
    tail = curr;

}


Node* sortList(Node* head) {
    
    // // Write your logic here
    // Approach 1 -----------------
    // int zerCount = 0;
    // int oneCount = 0;
    // int twoCount = 0;
    // Node* temp =head;
    // while(temp!= NULL){
    //     if(temp->data == 0){
    //         zerCount++;
    //     }
    //     else if(temp ->data == 1){
    //         oneCount++;
    //     }
    //     else{
    //         twoCount++;
    //     }
    //     temp = temp->next;
    // }

    // temp = head;
    // while(temp != NULL){
    //     if(zerCount!=0){
    //         temp->data = 0;
    //         zerCount--;
    //     }
    //     else if(oneCount != 0){
    //         temp->data = 1;
    //         oneCount--;
    //     }
    //     else {
    //         temp->data =2;
    //         twoCount--;
    //     }
    //     temp = temp->next;
    // }
    // return head;

    // Approach 2 -------------------
    // 3 dummy node 
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;


    Node* curr = head;
    // create separate list 0's ,1's,2's
    while(curr!= NULL){
        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1){
            insertAtTail(oneTail,curr);
        }
        else if(value == 2){
            insertAtTail(twoTail,curr);
        }
        curr = curr -> next;
    }
    // merge 3 sublist
    if(oneHead -> next != NULL){
        zeroTail ->next = oneHead->next;
    }
    else{
        zeroTail->next =  twoHead ->next;
    }

    oneTail->next = twoHead ->next;
    twoTail ->next = NULL;
    head = zeroHead ->next;
    // delete dummy noded
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);

    return head;


    
    
    
     
}

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values (only 0, 1, 2): ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertAtEnd(head, value);
    }

    head = sortList(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
