#include <iostream>

using namespace std;

struct TNode {
    int data;
    TNode *next;
};

TNode *head;

void initHead();
int isEmpty();
void insertDepan(int dataBaru);
void insertBelakang(int dataBaru);
void tampilList();
void hapusDepan();
void hapusBelakang();
void clearList();

void initHead() {
    head = NULL;
}

int isEmpty() {
    return (head == NULL) ? 1 : 0;
}

void insertDepan(int dataBaru) {
    TNode *baru;
    baru = new TNode;
    baru->data = dataBaru;
    baru->next = NULL;

    if (isEmpty() == 1) {
        head = baru;
        head->next = NULL;
    } else {
        baru->next = head;
        head = baru;
    }

    cout << "Data baru telah dimasukkan di depan" << endl;
}

void insertBelakang(int dataBaru) {
    TNode *baru, *bantu;
    baru = new TNode;
    baru->data = dataBaru;
    baru->next = NULL;
    if (isEmpty() == 1) {
        head = baru;
        head->next = NULL;
    } else {
        bantu = head;
        while (bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }

    cout << "Data baru telah dimasukkan di belakang" <<  endl;
}

void tampilList() {
    TNode *bantu;
    bantu = head;
    if (isEmpty() == 0) {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    } else {
        cout << "Masih kosong" << endl;
    }
}

void hapusDepan() {
    TNode *hapus;
    int d;
    if (isEmpty() == 0) {
        if (head->next != NULL) {
            hapus = head;
            d = hapus->data;
            head = head->next;
            delete hapus;
        } else {
            d = head->data;
            head = NULL;
        }
        cout << d << " terhapus" << endl;
    } else {
        cout << "Masih kosong" << endl;
    }
}

void hapusBelakang() {
    TNode *hapus, *bantu;
    int d;
    if (isEmpty() == 0) {
        if (head->next != NULL) {
            bantu = head;
            while (bantu->next->next != NULL) {
                bantu = bantu->next;
            }
            hapus = bantu->next;
            d = hapus->data;
            bantu->next = NULL;
            delete hapus;
        } else {
            d = head->data;
            head = NULL;
        }
        cout << d << " terhapus" << endl;
    } else {
        cout << "Masih kosong" <<  endl;
    }
}

void clearList() {
    TNode *bantu, *hapus;
    bantu = head;
    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = NULL;
}

int main() {
    cout << "Single Linked List Non Circular" << endl;
    cout << "1. Inisialisasi head... " << endl;
    initHead();
    cout << "Done" << endl;

    cout << "Tampilkan isi list" << endl;
    tampilList();

    cout << "Entri data di depan list" << endl;
    int dataBaru;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> dataBaru;
        insertDepan(dataBaru);
    }

    cout << "Tampilkan isi list" << endl;
    tampilList();

    cout << "Entri data di belakang list" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> dataBaru;
        insertBelakang(dataBaru);
    }

    cout << "Tampilkan isi list" << endl;
    tampilList();

    cout << "Hapus 2 data terdepan" << endl;
    for (int i = 0; i < 2; i++) {
        hapusDepan();
    }

    cout << "Tampilkan isi list: " << endl;
    tampilList();

    cout << "Hapus 2 data terakhir" << endl;
    for (int i = 0; i < 2; i++) {
        hapusBelakang();
    }

    cout << "Tampilkan isi list: " << endl;
    tampilList();

    cout << "Hapus semua node" << endl;
    clearList();
    cout << "Tampilkan isi list: " << endl;
    tampilList();
    return 0;
}