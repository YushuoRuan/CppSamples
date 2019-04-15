#include<iostream>
using namespace std;

int a = 123;

int getA() {
	return a;
}

class GetA {
private:
	int newA = a;
public:
	int getA() {
		return newA;
	}
};

int main() {

	cout << a << endl;
	cout << getA() << endl;
	
	GetA *GA = new GetA();

	cout << GA->getA() << endl;

	system("pause");
	return 0;
}
