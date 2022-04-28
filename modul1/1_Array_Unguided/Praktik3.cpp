#include <iostream>
using namespace std;

int main() 
{
    int banyakData;
    cout << "Masukan banyaknya data = ";
    cin >> banyakData;
    int data[banyakData];
    int jumlah = 0;

    // Ini untuk melakukan assignment atau pengisian nilai
    for (int i = 0; i < banyakData; i++)
    {
        cout << "Data[" << (i+1) << "] = ";
        cin >> data[i];
    }
    
    for (int i = 0; i < banyakData; i++)
    {
        jumlah = jumlah + data[i];
    }
    
    cout << "Banyaknya data = " << banyakData << endl;
    cout << "Rata-rata = " << jumlah/banyakData << endl;
    cout << "Jumlah = " << jumlah << endl;
    
    return 0;
}