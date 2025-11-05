#include<iostream>
#include<string>
using namespace std;
int main(){
	int posisi,n;
	string teks = "hello,world!";
	cout << "kata : "<< teks << endl;
	cout << "input posisi : ";
	cin >> posisi;
	cout << "input n : ";
	cin >> n;
	string hasil = teks.erase(posisi,n);
	cout << hasil<<endl;
}
