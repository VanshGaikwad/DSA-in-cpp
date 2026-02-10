#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }

    ~Node()
    {
        cout << "Memory free for node with data " << data << endl;
    }
};

// print list
void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// length of list
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at head
void insertAtHead(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insert at tail
void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    if (tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at position
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (temp != NULL && cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL)
        return;

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

// delete node
void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    // delete head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;

        delete temp;
        return;
    }

    Node *curr = head;
    int cnt = 1;

    while (curr != NULL && cnt < position)
    {
        curr = curr->next;
        cnt++;
    }

    if (curr == NULL)
        return;

    Node *prevNode = curr->prev;
    prevNode->next = curr->next;

    if (curr->next != NULL)
        curr->next->prev = prevNode;
    else
        tail = prevNode;

    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 11);
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 13);
    printNode(head);

    insertAtTail(head, tail, 5);
    printNode(head);

    insertAtPosition(head, tail, 3, 14);
    printNode(head);

    deleteNode(1, head, tail);
    printNode(head);

    deleteNode(3, head, tail);
    printNode(head);

    return 0;
}
