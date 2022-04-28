#include <iostream>

using namespace std;

struct buah{
	string namaBuah;
	string warnaBuah;
	int jumlahBuah;
};
int main(){
	buah buah1, buah2;
	
	buah1.namaBuah = "apel";
	buah1.warnaBuah = "merah";
	buah1.jumlahBuah = 3;
	
	buah2.namaBuah = "anggur";
	buah2.warnaBuah = "ungu";
	buah2.jumlahBuah = 2;
	
	cout<<buah1.namaBuah<<" "<<buah1.warnaBuah<<" "<<buah1.jumlahBuah<<endl;
	cout<<buah2.namaBuah<<" "<<buah2.warnaBuah<<" "<<buah2.jumlahBuah<<endl;	
}
//string namaBuah1 = "apel";
//string warnaBuah1 = "merah";
//int jumlahBuah1 = 3;
//
//string namaBuah2 = "apel";
//string warnaBuah2 = "merah";
//int jumlahBuah2 = 3;
