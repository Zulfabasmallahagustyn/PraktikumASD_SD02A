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

int totalNode() {
    Node *cur;

    cur = head;
    int total = 0;
    while (cur != NULL) {
        cur = cur->next;
        total++;
    }
    return total;
}

void addFirst(int value) {
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
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
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

void addMiddle(int position, int value) {
    if (head != NULL) {
        if (position == 0) {
            addFirst(value);
        } else if (position == totalNode() - 1) {
            addLast(value);
        } else {
            Node *newNode, *cur, *afterNode;
            newNode = new Node();

            newNode->data = value;
            newNode->prev = NULL;
            newNode->next = NULL;

            cur = head;
            int index = 0;
            while (index < position-1) {
                cur = cur->next;
                index++;
            }

            afterNode = cur->next;
            newNode->prev = cur;
            newNode->next = afterNode;
            cur->next = newNode;
            afterNode->prev = newNode;
        }
    } else {
        cout << "Cannot add any node. Empty list!" << endl;
    }
}

void removeFirst() {
    if (head != NULL) {
        Node *delNode;

        if (head->next != NULL) {
            delNode = head;
            head = head->next;
            head->prev = NULL;
            delete delNode;
        } else {
            head = NULL;
        }
    } else {
        cout << "Cannot remove any node. Empty list!" << endl;
    }
}

void removeLast() {
    if (head != NULL) {
        Node *delNode;

        if (tail->prev != NULL) {
            delNode = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete delNode;
        } else {
            tail = NULL;
        }
    } else {
        cout << "Cannot remove any node. Empty list!" << endl;
    }
}

void printList() {
    Node *cur;
    cur = head;
    while (cur != NULL) {
        cout << "(" << cur->data << ")" << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main() {
    init();

    addLast(44);
    addLast(55);
    addLast(88);

    addFirst(47);
    addFirst(89);
    addFirst(20);

    removeFirst();

    printList();

    removeLast();
    printList();

    addMiddle(1, 89);
    printList();

    addMiddle(0, 60);
    printList();

    addMiddle(5, 77);
    printList();
}
