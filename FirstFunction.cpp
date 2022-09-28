#include<iostream>

using namespace std;

void sayHi(){
	cout << "Hi!\n";
}

void sayBye();			//Functions must be declared prior to main method in order for code to compile correctly.
						//The body of functions can be completeed below the main method, but compling is done in order
int main(){				//so we must at least declare it prior to the main method.

	sayHi();
	sayBye();
	return 0;
}

void sayBye(){
	cout << "Bye!\n";
}