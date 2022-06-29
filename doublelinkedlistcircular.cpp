#include <iostream>
using namespace std;

// Prototype fungsi
void init();
int totalNode();
void addFirst(int);
void addMiddle(int, int);
void addLast(int);
void removeFirst();
void removeMiddle(int);
void removeLast();
void printList();
void clear();

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

// TODO
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

// DONE
void addFirst(int value) {
    Node *newNode;
    newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
        head->next = head;
        head->prev = head;
        tail = head;
    } else {
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        head = newNode;
    }
}

// UNGUIDED
void addMiddle(int position, int value) {
    if (head != NULL) {
        if (position == 0) {
            addFirst(value);
        } else if (position == totalNode() - 1) {
            addLast(value);
        } else if (position < 0 || position > totalNode()-1) {
            cout << "Cannot add node. Unreachable index" << endl;
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

// DONE
void addLast(int value) {
    Node *newNode;
    newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
        head->next = head;
        head->prev = head;
        tail = head;
    } else {
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        head->next = newNode;
        tail = newNode;
    }
}

// TODO
void removeFirst() {
    if (head != NULL) {
        Node *delNode;

        if (head->next != head) {
            delNode = head;
            head = head->next;
            tail->next = head;
            head->prev = tail;
            delete delNode;
        } else {
            head = NULL;
        }
    } else {
        cout << "Cannot remove any node. Empty list!" << endl;
    }
}

// TODO
void removeMiddle(int position) {
    if (head != NULL) {
        if (position == 0) {
            removeFirst();
        } else if (position == totalNode() - 1) {
            removeLast();
        } else if (position < 0 || position > totalNode()-1) {
            cout << "Cannot add node. Unreachable index" << endl;
        } else {
            Node *delNode, *cur, *afterNode;

            cur = head;
            int index = 0;
            while (index < position-1) {
                cur = cur->next;
                index++;
            }

            delNode = cur->next;
            afterNode = delNode->next;
            cur->next = afterNode;
            afterNode->prev = cur;
            delete delNode;
        }
    } else {
        cout << "Cannot add any node. Empty list!" << endl;
    }
}

// TODO
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

// DONE
void printList() {
    Node *cur;
    cur = head;
    do {
        cout << "(" << cur->data << ")" << " ";
        cur = cur->next;
    } while (cur != head);
    cout << endl;
}

// TODO
void clear() {
    Node *cur, *delNode;
    cur = head;

    while (cur != NULL) {
        delNode = cur;
        cur = cur->next;
        delete delNode;
    }

    head = NULL;
}

int main() {
    init();

    addLast(88);
    addLast(99);
    printList();

    addFirst(33);
    addFirst(66);
    printList();

    removeFirst();
    printList();
}