#include <iostream>

using namespace std;

struct durasiWaktu{
	int jam;
	int menit;
	int detik;
};

int main(){
	durasiWaktu waktu;
	int totalDetik, tagihan;
	
	cout<<"masukkan jam: ";
	cin>>waktu.jam;
	cout<<"masukkan menit: ";
	cin>>waktu.menit;
	cout<<"masukkan detik: ";
	cin>>waktu.detik;
	
	totalDetik = (waktu.jam*3600)+(waktu.menit*60)+(waktu.detik);
	tagihan = 130 * (totalDetik/30);
	cout<<"total biaya: "<<tagihan;
}
