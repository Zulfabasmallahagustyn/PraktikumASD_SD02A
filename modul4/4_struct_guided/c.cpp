#include <iostream>

using namespace std;

struct nilai{
	float tugas;
	float kuis;
	float mid;
	float uas;
};

int main(){
	nilai nilaiBambang;
	int nilaiAkhir;
	
	cout<<"masukkan nilai tugas: ";
	cin>>nilaiBambang.tugas;
	cout<<"masukkan nilai kuis: ";
	cin>>nilaiBambang.kuis;
	cout<<"masukkan nilai mid: ";
	cin>>nilaiBambang.mid;
	cout<<"masukkan nilai uas: ";
	cin>>nilaiBambang.uas;
	
	nilaiAkhir = (nilaiBambang.tugas*0.1) + (nilaiBambang.kuis*0.2) + (nilaiBambang.mid*0.3) + (nilaiBambang.uas*0.4);
	cout<<"Nilai akhir: "<<nilaiAkhir;
	if (nilaiAkhir > 85){
		cout<<" (A)";
	} else if (nilaiAkhir > 70){
		cout<<" (B";
	} else if (nilaiAkhir > 55){
		cout<<" (C";
	} else if (nilaiAkhir > 40){
		cout<<" (D)";
	} else {
		cout<<" (E)";
	}
}
