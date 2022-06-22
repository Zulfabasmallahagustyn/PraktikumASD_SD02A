#include <iostream>
using namespace std;

// Deklarasi node
struct Node {
    int data;
    Node *prev;
    Node *next;
};

int main() {
    Node *node1, *node2, *node3;

    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    node1->data = 44;
    node1->prev = NULL;
    node1->next = node2;

    node2->data = 55;
    node2->prev = node1;
    node2->next = node3;

    node3->data = 88;
    node3->prev = node2;
    node3->next = NULL;

    Node *cur;
    cur = node1;
    while (cur != NULL) {
        cout << "(" << cur->data << ")" << " ";
        cur = cur->next;
    }
    cout << endl;
}
