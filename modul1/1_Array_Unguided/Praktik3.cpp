#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int banyakData;
    cout << "Masukan banyaknya data = ";
    cin >> banyakData;
    int data[banyakData];
    int jumlah = 0, rataRata = 0;
    double sigma = 0.0, sd = 0.0;

    // Ini untuk melakukan assignment atau pengisian nilai
    for (int i = 0; i < banyakData; i++)
    {
        cout << "Data[" << (i + 1) << "] = ";
        cin >> data[i];
    }

    for (int i = 0; i < banyakData; i++)
    {
        jumlah = jumlah + data[i];
    }

    rataRata = jumlah / banyakData;

    for (int i = 0; i < banyakData; i++)
    {
        sigma = sigma + pow(data[i] - rataRata, 2);
    }

    sd = sqrt(sigma/banyakData);

    cout << "Standar Deviasi = " << sd << endl;

    return 0;
    /*hitung rata-rata terlebih dahulu
    lalu tiap data dikurangi oleh rata-rata
	lalu hasilnya dijumlahkan
	lalu dibagi dengan banyaknya data*/
}
