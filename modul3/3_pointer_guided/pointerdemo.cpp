#include <iostream>

using namespace std;

int main() {
    int a = 5; 
    int *aPtr;                   // deklarasi pointer

    aPtr = &a;                   // mengisi nilai pointer dengan address dari a

    cout << "Nilai dari a: " << a << endl;
    cout << "Address dari a: " << &a << endl;

    cout << "Nilai dari aPtr: " << aPtr << endl;
    cout << "Nilai dari a lewat aPtr: " << *aPtr << endl;

    // Mengubah nilai dari variabel a
    // melalui aPtr
    // menggunakan dereference operator
    *aPtr = 7;

    cout << "Nilai dari a: " << a << endl;
    return 0;
}