#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string kata;
	cout << "input kata : ";
	getline(cin,kata);

	for(int i=0;i<=kata.length();i++){
		kata[i] = toupper(kata[i]);
	}
	cout << "to upper : "<<kata<<endl;

	for(int i=0;i<=kata.length();i++){
                kata[i] = tolower(kata[i]);
        }
	cout << "to lower : " << kata<<endl;
}
