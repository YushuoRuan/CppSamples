#include<iostream>
#include<string>
using namespace std;

class Tableware {
public:
	void talk() {
		cout << "I am a Tableware" << endl;
	}
};

class Fork : virtual public Tableware {
public:

};

class Spoon :virtual public Tableware {
public:

};

class Forpoon : public Fork, public Spoon {

};

int main() {

	Forpoon FP;

	FP.talk(); //ambiguous

	system("pause");
	return 0;
}