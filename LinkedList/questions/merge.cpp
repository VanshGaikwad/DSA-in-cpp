#include <iostream>
using namespace std;

/************************************************************
    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
************************************************************/

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        next = NULL;
        this->data = data;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

// Helper function to print the linked list
void printList(Node<int>* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Merge two sorted lists by inserting nodes from second into first
// Time Complexity: O(n + m) where n and m are lengths of both lists
// Space Complexity: O(1)
Node<int>* solve(Node<int>* first, Node<int>* second) {
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1->next;

    Node<int>* curr2 = second;
    Node<int>* next2 = curr2->next;

    // Traverse both lists and insert nodes from second into first at correct positions
    while (next1 != NULL && curr2 != NULL) {
        // If curr2 value lies between curr1 and next1, insert it
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
            curr1->next = curr2;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        } 
        // Otherwise, move forward in first list
        else {
            curr1 = next1;
            next1 = next1->next;
            // If we reach end of first list, attach remaining second list
            if (next1 == NULL) {
                curr1->next = curr2;
                return first;
            }
        }
        // Update next2 pointer
        if (curr2 != NULL) {
            next2 = curr2->next;
        }
    }

    return first;
}

// Main function to merge two sorted linked lists
// Returns the merged sorted linked list
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    // If first list is empty, return second
    if (first == NULL)
        return second;

    // If second list is empty, return first
    if (second == NULL)
        return first;

    // Ensure first list starts with smaller or equal element
    if (first->data <= second->data) {
        return solve(first, second);
    }
    // Otherwise swap and solve
    return solve(second, first);
}

// Main function with test cases
int main() {
    cout << "===== Merge Two Sorted Linked Lists =====" << endl << endl;

    // Test Case 1: [1,2,4] and [1,3,4]
    Node<int>* list1 = new Node<int>(1);
    list1->next = new Node<int>(2);
    list1->next->next = new Node<int>(4);

    Node<int>* list2 = new Node<int>(1);
    list2->next = new Node<int>(3);
    list2->next->next = new Node<int>(4);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    Node<int>* merged = sortTwoLists(list1, list2);
    cout << "Merged: ";
    printList(merged);

    cout << endl;

    // Test Case 2: Empty list and [0]
    Node<int>* list3 = NULL;
    Node<int>* list4 = new Node<int>(0);

    cout << "List 3: ";
    printList(list3);
    cout << "List 4: ";
    printList(list4);

    Node<int>* merged2 = sortTwoLists(list3, list4);
    cout << "Merged: ";
    printList(merged2);

    cout << endl;

    // Test Case 3: [1,2,3] and [2,3,4]
    Node<int>* list5 = new Node<int>(1);
    list5->next = new Node<int>(2);
    list5->next->next = new Node<int>(3);

    Node<int>* list6 = new Node<int>(2);
    list6->next = new Node<int>(3);
    list6->next->next = new Node<int>(4);

    cout << "List 5: ";
    printList(list5);
    cout << "List 6: ";
    printList(list6);

    Node<int>* merged3 = sortTwoLists(list5, list6);
    cout << "Merged: ";
    printList(merged3);

    return 0;
}