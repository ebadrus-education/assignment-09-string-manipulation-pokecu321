#include <iostream>
#include <string>
using namespace std;
int main(){
	string kata = "dindon";
	cout << "kata sebelum dirubah : " << kata<<endl;
	kata = kata.replace(0,kata.length(),"adin");
	cout << "kata setelah dirubah : "<< kata<<endl;
}
