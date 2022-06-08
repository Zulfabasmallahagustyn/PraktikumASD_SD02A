#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct TNode {
    string nama;
    int nim;
    TNode *next;
};

TNode *head;

void initHead();
int isEmpty();
void insertDepan(string nama, int nim);
void insertBelakang(string nama, int nim);
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

void insertDepan(string nama, int nim) {
    TNode *baru;
    baru = new TNode;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty() == 1) {
        head = baru;
        head->next = NULL;
    } else {
        baru->next = head;
        head = baru;
    }
}

void insertBelakang(string nama, int nim) {
    TNode *baru, *bantu;
    baru = new TNode;
    baru->nama = nama;
    baru->nim = nim;
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
}

void tampilList() {
    TNode *bantu;
    bantu = head;

    if (isEmpty() == 0) {
        cout << endl << "DATA MAHASISWA" << endl;
        cout << "Nama" << setw(10) << "NIM" << endl;
        while (bantu != NULL) {
            cout << bantu->nama << setw(14) << bantu->nim << endl;
            bantu = bantu->next;
        }
        cout << endl;
    } else {
        cout << "Masih kosong" << endl;
    }
}

void hapusDepan() {
    TNode *hapus;
    string nama;
    int nim;
    if (isEmpty() == 0) {
        if (head->next != NULL) {
            hapus = head;
            nama = hapus->nama;
            nim = hapus->nim;
            head = head->next;
            delete hapus;
        } else {
            nama = hapus->nama;
            nim = hapus->nim;
            head = NULL;
        }
        cout << nama << " dengan nim " << nim << " terhapus" << endl;
    } else {
        cout << "Masih kosong" << endl;
    }
}

void hapusBelakang() {
    TNode *hapus, *bantu;
    string nama;
    int nim;

    if (isEmpty() == 0) {
        if (head->next != NULL) {
            bantu = head;
            while (bantu->next->next != NULL) {
                bantu = bantu->next;
            }
            hapus = bantu->next;
            nama = hapus->nama;
            nim = hapus->nim;
            bantu->next = NULL;
            delete hapus;
        } else {
            nama = hapus->nama;
            nim = hapus->nim;
            head = NULL;
        }
        cout << nama << " dengan nim " << nim << " terhapus" << endl;
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
    cout << setw(45) << "PROGRAM SENARAI BERANTAI" << endl << endl;
    initHead();
    string dataBaruNama;
    int dataBaruNim;

    for (int i = 1; i <= 4; i++) {
        cout << "Masukkan nama ke-" << i << ": ";
        cin >> dataBaruNama;
        cout << "Masukkan nim ke-" << i << ": ";
        cin >> dataBaruNim;
        insertBelakang(dataBaruNama, dataBaruNim);
        cout << endl;
    }

    hapusBelakang();
    tampilList();

    return 0;
}