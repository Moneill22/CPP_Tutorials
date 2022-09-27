#include<iostream>
#include <cmath>

using namespace std;

int main(){

	int x = 5;
	double y = 5.5;

	cout << x / y << "\n"; 		//Working with ints and doubles
	cout << pow(x,x) << "\n";	//Raising ints to powers of ints
	cout << pow(x,y) << "\n";	//Raising ints to powers of doubles
	cout << sqrt(36) << "\n";	//Taking square root
	cout << ceil(4.1) << "\n";	//Rounding up
	cout << floor(4.1) << "\n";	//Rounding down
	cout << fmax(3,10) << "\n";	//Find max
	cout << fmin(3,10) << "\n";	//Find min



	return 0;
}
