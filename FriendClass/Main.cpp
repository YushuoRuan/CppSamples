#include<iostream>
#include<string>
using namespace std;

class Pet;

class Person {
private:
	string name;
	int age;
public:
	Person(){
		name = "p1";
		age = 20;
	}
	string getName() {
		return name;
	}
	
	string getPetName1(Pet &p);

};

class Pet {
private:
	string name;
	int age;
public:
	Pet() {
		name = "pp";
		age = 1;
	}
	//friend class Person;
	friend string Person::getPetName1(Pet &p);
	friend class Person2;
};

string Person::getPetName1(Pet &p) {
	return p.name;
}

class Person2
{
private:
	string name;
	int age;
public:
	Person2() {
		name = "p2";
		age = 21;
	}
	string getName() {
		return name;
	}
	string getPetName2(Pet &p){
		return p.name;
	}
	int getPetAge2(Pet &p) {
		return p.age;
	}

};

int main() {

	Person person;
	Person2 person2;
	Pet pet;
	cout << person.getName() << " has pet " << person.getPetName1(pet) << endl;
	cout << person2.getName() << " has pet " << person2.getPetName2(pet) << endl;


	system("pause");
	return 0;
}




