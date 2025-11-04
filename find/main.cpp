#include <iostream>
#include<string>
using namespace std;
int main(){
	string cari,hasil;
	string profil = " nama : adin, \n kls : x rpl 2, \n absen : 15 \n ";
	cout << profil;
	cout << "find = " <<cari;
	cin >> cari;
	size_t posisi = profil.find(cari);

    // Check if the position returned is std::string::npos
	if (posisi != string::npos) {
		cout << "substring di temukan di index : " << posisi <<endl;
   		cout << "substring = "<< profil.substr(posisi,'\n')<<endl;
		cout << posisi<<endl;
	}
	else {
        	cout << "Substring tidak ditemukan :(" << endl;
    }

}
