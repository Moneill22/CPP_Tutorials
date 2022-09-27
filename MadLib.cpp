#include<iostream>

using namespace std;

int main(){

	string color, pluralNoun, celebrity;

	cout << "Enter a color: ";
	getline(cin,color);

	cout << "Enter a plural noun: ";
	getline(cin,pluralNoun);

	cout << "Name a celebrity: ";
	getline(cin, celebrity);

	cout << "Roses are " << color << "\n";
	cout << "Violets are " << pluralNoun << "\n";
	cout << "I love you " << celebrity << "\n";


	return 0;
}