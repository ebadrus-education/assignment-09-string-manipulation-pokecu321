#include <iostream>
#include<string>
using namespace std;
int main(){
	string kata;
	string katasubstr;
	int a,b;
	cout << "substr(x,y)"<<endl
		<<"mengambil kata setelah index ke x,"<<endl
		<<"lalu mengambil banyak nya y"<<endl;
	cout << "input kata : ";
	getline(cin,kata);
	cout << "kata = "<<kata<<endl;
	cout << "index awal : ";
	cin >> a;
	cout << "index akhir : ";
	cin >> b;
	katasubstr = kata.substr(a,b);
	cout << "kata.substr("<<a<<","<<b<<")= "<< katasubstr<<endl;
}
