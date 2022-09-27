#include<iostream>
#include<cmath>

using namespace std;

int main(){	

	int age;

	cout << "Enter your age: ";
	cin >> age;
	cout << "You are " << age << " years old.\n";
	
	string hometown;
	cout << "Where are you from? ";
	cin.ignore();								//Tried to use getline immediately, but learned we nede to ignore the newline
	getline(cin,hometown);
	cout << hometown << " is a cool town!\n";

	return 0;
}