#include <iostream>
#include <string>

using namespace std;

int jumlahSimpul = 5;
string *dataSimpul;
int **dataBusur;
bool cekMatrik = false;

void buatMatriks(){
	dataSimpul = new string[jumlahSimpul];
	//Membuat simpul dengan jumlah yang dimasukkan user
	dataBusur = new int*[jumlahSimpul];
	dataBusur[0] = new int[jumlahSimpul * jumlahSimpul];
	for(int i = 1; i < jumlahSimpul; i++){
		dataBusur[i] = dataBusur[i-1] + jumlahSimpul;
	}
	//Membuat matrik 2 dimensi dengan ukuran sesuai masukkan user
	
	cout<<"Silahkan masukkan nama simpul "<<endl;
	for(int i = 0; i < jumlahSimpul; i++){
		cout<<"Simpul "<<i+1<<" : ";
		cin>>dataSimpul[i];
	}
	//Proses input data simpul
	
	cout<<"Silahkan masukkan bobot antar simpul "<<endl;
	for(int baris = 0; baris < jumlahSimpul; baris++){
		for(int kolom = 0; kolom < jumlahSimpul; kolom++){
			cout<<dataSimpul[baris]<<" --> "<<dataSimpul[kolom]<<" : ";
			cin>> dataBusur[baris][kolom];
		}
	}
	//Prose input data matriks (busur)
	
	cekMatrik = true;
	//Atur keberadaan matrik menjadi ada/true
}

void tampilMatriks(){
	if(cekMatrik){
		for(int i = 0; i < jumlahSimpul; i++){
			cout<<dataSimpul[i]<<" ";
		}
		cout<<endl;
		for(int baris = 0; baris < jumlahSimpul; baris++){
			for(int kolom = 0; kolom < jumlahSimpul; kolom++){
				cout<<dataBusur[baris][kolom]<<" ";
			}cout<<endl;
		}
	}else{
		cout<<"Tidak ada matriks"<<endl;
	}
}

int main(){
	cout<<"Silahkan masukkan jumlah simpul : ";
	cin>>jumlahSimpul;
	buatMatriks();
	tampilMatriks();
	return 0;
}
