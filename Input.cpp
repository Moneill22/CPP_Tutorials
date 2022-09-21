#include<iostream>

using namespace std;

int main(){

	int x, y;

	std::cin >> x >> y;

	std::cout << "You input " << x << " and " << y << "\n";

	int z = x+y;

	std::cout << "The sum of these two numbers is " << z << endl;
	std::cout << "Goodbye!"; 
	return z;

}