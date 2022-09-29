#include<iostream>

using namespace std;

class Dog{

	public:
		string name;
		int age;
		int ageInDogYears;

		Dog(){
		}

		Dog(string name, int age){
			this->name = name;
			this->age = age;
			ageInDogYears = 7*age;
		}

		void speak(){
			cout << "Woof woof\n";
		}


};

class Golden : public Dog{
	public:
		void speak(){
			cout << "Bork bork\n";
		}

};



int main(){

	Dog buddy = Dog("Buddy",7);
	buddy.speak();

	Golden shadow;
	shadow.name = "Shadow";
	cout << shadow.name << "\n";
	shadow.speak();

	return 0;
}