#include<iostream>

using namespace std;

int main(){

	int age = 24;
	double GPA = 4.0;
	string name = "Matt";

	cout << &age << "\n";

	int *pAge = &age;

	cout << pAge << "\n";
	cout << *pAge << "\n";
	cout << *&age << "\n";



	return 0;
}