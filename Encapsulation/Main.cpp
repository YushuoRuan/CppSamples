#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person {
private:
	string name;
	int age;
	vector<string> hobbies;

public:
	Person(string n, int a) {
		name = n;
		age = a;
	}
	void setName(string n) {
		name = n;
	}
	void setAge(int a){
		age = a;
	}
	void addHobby(string h) {
		hobbies.push_back(h);
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	vector<string> getHobbies() {
		return hobbies;
	}

	

};

int main() {
	Person* p = new Person("P", 22);
	
	p->addHobby("skiing");
	p->addHobby("hockey");

	cout << p->getName() << " is " << p->getAge() << " years old, and he likes ";
	for (int i = 0; i < p->getHobbies().size(); i++) {
		cout << p->getHobbies()[i];
		if (i != p->getHobbies().size()-1)
			cout << " and ";
	}
	cout << ". " << endl;

	system("pause");
	return 0;
}