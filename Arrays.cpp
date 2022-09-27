#include<iostream>

using namespace std;

int main(){

	int luckyNums[20] = {2,7,8};							//Arrays can be instantiated directed in a similar fashion to Java

	cout << luckyNums[1] << "\n";

	luckyNums[1] = 9;										//Values can be easily updated 

	cout << luckyNums[1] << "\n";	

	cout << luckyNums[10] << "\n";							//int array values initialize to 0

	cout << sizeof(luckyNums)/sizeof(luckyNums[0]) << "\n";	//Finding length of array using sizeof()

	cout << *(&luckyNums + 1) - luckyNums << "\n";			//Finding length of array using pointer arithmetic



	return 0;
}