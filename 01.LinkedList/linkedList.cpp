#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        string name;
        Node* next;
};

void listTraverse(Node* n) { //function to traverse through the list
    cout << "The data in the linked list is: \n";
    while(n != NULL) {
        cout << n->data << endl;
        cout << n->name << endl;
        cout << endl;
        n = n->next;
    }
}

int main() {
    //initializing the nodes
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    //allocating nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    //appending data to the linked list fields
    head->data = 11;
    head->name = "Makarand";
    head->next = second;

    second->data = 40;
    second->name = "Random";
    second-> next = third;

    third->data = 69;
    third->name = "Nice";
    third->next = fourth;

    fourth->data = 420;
    fourth->name = "Snoopyy";
    fourth->next = NULL;

    listTraverse(head);

    return 0;
}