#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string kode[5];
    string nama[5];
    int jumlah[5];
    int harga[5];
    int total[5];
    int totalItem = 0, totalHarga = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan Kode ke-" << (i + 1) << ": ";
        cin >> kode[i];

        cout << "Masukkan Nama ke-" << (i + 1) << ": ";
        cin >> nama[i];

        cout << "Masukkan Jumlah ke-" << (i + 1) << ": ";
        cin >> jumlah[i];

        cout << "Masukkan Harga ke-" << (i + 1) << ": ";
        cin >> harga[i];

        total[i] = jumlah[i] * harga[i];

        cout << endl;
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> kode[i];

    //     cin >> nama[i];

    //     cin >> jumlah[i];

    //     cin >> harga[i];

    //     total[i] = jumlah[i] * harga[i];
    // }

    for (int i = 0; i < 5; i++)
    {
        totalItem = totalItem + jumlah[i];
        totalHarga = totalHarga + total[i];
    }

    cout << "Kode " << setw(0) << " Nama " << setw(13) << " Jumlah " << setw(13) << " Harga " << setw(13) << " Total " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << setw(4) << right << kode[i] << " " << setw(13) << left << nama[i] << setw(13) << jumlah[i] << setw(13) << harga[i] << setw(13) << total[i] << endl;
    }

    cout << "Jumlah item = " << totalItem << endl;
    cout << "Total pembelian = " << totalHarga << endl;
}
