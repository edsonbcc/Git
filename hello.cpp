#include <iostream>
#Include <string>
using namespace std;

class HelloWorld {
private:
	string str;

public:
	HelloWorld(string str) {
		this->str = str;
	}

	void print () {
		cout << str << endl;
	}

};

int main () {

	HelloWorld * H = new HelloWorld("Hello World!!!!!");

	H->print();

	return 0;
}