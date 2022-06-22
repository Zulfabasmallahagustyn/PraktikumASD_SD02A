#include <iostream>
using namespace std;

// Deklarasi node
struct Node {
    int data;
    Node *prev;
    Node *next;
};

Node *head, *tail;

void init() {
    head = NULL;
    tail = NULL;
}

void addLast(int value) {
    Node *newNode;
    newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
        head->next = NULL;
        head->prev = NULL;
        tail = head;
    } else {
        newNode->prev = tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

int main() {
    init();

    addLast(44);
    addLast(55);
    addLast(88);

    Node *cur;
    cur = head;
    while (cur != NULL) {
        cout << "(" << cur->data << ")" << " ";
        cur = cur->next;
    }
    cout << endl;
}
