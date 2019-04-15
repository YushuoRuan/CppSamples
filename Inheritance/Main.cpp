#include<iostream>
#include<string>

using namespace std;

class MyPet {
private:
	string owner = "me";
protected:
	int age = 1;
public:
	string color = "gray";
};

//Public Inheritance
class Dog1 : public MyPet{

			//owner already unaccessible

	//protected:
	//	int age = 1;
	//public:
	//	string color = "gray";
};

//Protect Inheritance
class Dog2 : protected MyPet {
	
			//owner already unaccessible

	//protected:
	//	int age = 1;
	//protected:
	//	string color = "gray";
};

//Private Inheritance
class Dog3 : private MyPet {

			//owner already unaccessible

	//private:
	//	int age = 1;
	//private:
	//	string color = "gray";
};

class PublicDog : public Dog1 {
public:
	void printDogInfo() {
		cout << "Owner already unaccessible from Dog level" << endl;
		cout << age << " (protected)" << endl;
		cout << color << " (public)" << endl;
	}
};

class ProtectedDog : public Dog2 {
public:
	void printDogInfo() {
		cout << "Owner already unaccessible from Dog level" << endl;
		cout << age << " (protected)" << endl;
		cout << color << " (protected)" << endl;
	}
};

class PrivateDog : public Dog2 {
public:
	void printDogInfo() {
		cout << "Owner already unaccessible from Dog level" << endl; 
		cout << "Age is blocked by Dog3" << endl;
		cout << "Color is blocked by Dog3" << endl;
	}
};

int main() {
	//instantiate
	PublicDog public_dog;
	ProtectedDog protected_dog;
	PrivateDog private_dog;

	public_dog.printDogInfo(); cout << endl;
	protected_dog.printDogInfo(); cout << endl;
	private_dog.printDogInfo(); cout << endl;

	cout << public_dog.color << endl; //only public_dog.color is accessible from main!

	system("pause");
	return 0;
}