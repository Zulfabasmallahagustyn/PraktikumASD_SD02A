#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    float mark[5];
    float average;
};

int main () {
    Student nazar;
    float jumlah = 0;

    cout << "Your name, please: ";
    getline(cin, nazar.name);  

    cout << "Your id is: ";
    cin >> nazar.id;

    cout << "Enter your marks for five tests." << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Exam " << i+1 << ": ";
        cin >> nazar.mark[i]; 
    }

    for (int i = 0; i < 5; i++) {
        jumlah = jumlah + nazar.mark[i];
        nazar.average = jumlah / 5;
    }
    
    cout << endl;
    cout << "Hello, " << nazar.name << endl; 
    cout << "Your Student ID is " << nazar.id << endl;
    cout << "Your marks are: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Test " << i+1 << ": " << nazar.mark[i] << " " << endl;
    }
    cout << "Your average is: " << nazar.average << endl;
}