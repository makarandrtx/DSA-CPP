#include <iostream>
using namespace std;
/*A node can be inserted in three ways
1. At the front of the LL
2. After a given node
3. In the end of the LL */
class Node {
    public:
        int data;
        string name;
        Node* next;
};

//adding a node in the beginning of the linked list
void addAtStart(Node** head_ref, int newData, string newName) {
    //allocate a new node in heap
    Node* new_node = new Node();

    //add your data from the parameters
    new_node->data = newData;
    new_node->name = newName;

    //make the next of the new node as the head node of the Linked List
    new_node->next = (*head_ref);
    
    //Move the head to point to the newly added Node.
    (*head_ref) = new_node;
}

//adding a node after a specified node in linked list 
void insert(Node* prev_node, int newData, string newName) {
    //testing for a git auto add feature
}

void ListTraverse(Node* n) {
    cout << "The data in the list is: \n";
    while(n != NULL) {
        cout << n->data << endl;
        cout << n->name << endl;
        cout << endl;
        n = n->next;
    }
}

int main() {

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 11;
    head->name = "HP";
    head->next = second;

    second->data = 8;
    second->name = "Pavilion";
    second->next = third;

    third->data = 1048;
    third->name = "ECXXXX";
    third->next = NULL;

    addAtStart(&head, 15, "Screen Size");
    ListTraverse(head);

    return 0;
}