#include<iostream>

using namespace std;

int main(){

	string name = "Matt";

	cout << name.length() << "\n";
	cout << name[0]<< "\n";

	name[1] = 'e';

	cout << name << "\n";
	cout << name.find("t",0) << "\n";
	cout << name.substr(0,2) << "\n";
	cout << name.substr(1,1) << "\n";

	

	return 0;
}