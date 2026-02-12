#include <iostream>
#include<map>
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
// using map-----------------
// bool detectLoop(Node* head){
//     if(head==NULL) return false;
//     map<Node*,bool> visited;
//     Node* temp = head;
//     while(temp!= NULL){
//         // if cycle is present 
//         if(visited[temp] == true){
//             return true;
//         }
//         else{visited[temp] = true;
//         temp = temp -> next;}
//     }
//     return false;

// }


// using floyd's cycle detection algorithm-----------------
bool detectLoop(Node* head){
    if(head == NULL) return false;
    Node *slow = head;
    Node *fast = head;
    while(slow != NULL && fast != NULL && fast -> next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow== fast){
            return true;
        }
    }
    return false;
}

Node* floydsAlgo(Node* head){
    if(head == NULL) return NULL;
    Node *slow = head;
    Node *fast = head;
    while(slow != NULL && fast != NULL && fast -> next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow== fast){
            return slow;
        }
    }
    return NULL;

}

Node* getStatingNode(Node* head){
    if(head == NULL  ) return NULL;
    Node* insetersection = floydsAlgo(head);
    if(insetersection == NULL)   return NULL;
    Node* slow = head;
    while(slow!=insetersection){
        slow = slow->next;
        insetersection = insetersection -> next;
    }
    return slow;


};

void removeLoop(Node*head){
    if(head == NULL) return;
    Node* startofLoop =getStatingNode(head);
    if(startofLoop == NULL) return;
    Node*temp = startofLoop;
    while (temp->next != startofLoop)
    {
        temp = temp->next;
    }
    temp -> next = NULL;
    
}


void insertAttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    return;

}

int main() {
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    
    
    insertAttail(tail, 12);
    insertAttail(tail,13);
    insertAttail(tail,14);
    tail->next =head ->next; // creating a cycle
    if(detectLoop(head)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }
    cout<<endl;
    cout<<getStatingNode(head)->data<<endl;

    // printNode(head);

    
    return 0;
}