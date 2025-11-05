#include <iostream>
#include<string>
using namespace std;
int main(){
	string cari,hasil;
	string profil = "nama : adin \nkls : x rpl 2 \nabsen : 15 \n";
	cout << profil;
	cout << "find = " <<cari;
	cin >> cari;
	
	size_t posisi = profil.find(cari);
	bool ditemukan = false;

	while(posisi != string::npos){
		ditemukan = true;
		size_t awal = profil.rfind('\n',posisi);
		size_t akhir = profil.find('\n',posisi);

		if(awal == string::npos){
			awal = 0;
			
		}
		else{
			awal += 1;
		}
		
		if(akhir == string::npos){
		akhir = profil.length();
		}
		
		string baris;
		baris = profil.substr(awal,akhir-awal);
		cout << "hasil : "
		<< baris<<endl;
		posisi = profil.find(cari,posisi +1);



	}

	if(!ditemukan){
		cout << "tidak ditemukan!"<<endl;
	}
}
