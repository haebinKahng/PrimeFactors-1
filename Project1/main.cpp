#include <stdexcept>
#include <iostream>
using namespace std;

class OMGException : public std::exception {
public:
};

void run(int x) {
	if (x == 19) {
		throw OMGException();
	}
	cout << "Working no problem" << endl;
}



void go(int a, int b) {
	if (a < 0 || b < 0) throw std::invalid_argument("Only Natural nambers!");
	if (a > 10 || b > 10) throw std::out_of_range("Out of range");
	cout << a + b << endl;
}


int main() {
	try {
		go(-3, 2);
	}
	catch (exception & e) {
		std::cout << e.what() << endl;
	}
	run(1);
}