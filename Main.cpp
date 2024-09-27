#include <iostream>
#include <ctime>
using namespace std; 

int main() {

	//Simple program
	int myNumber, yourNumber;
	srand(time(0));

	cout << "Hey! Type in your favorite number and I'll give you mine" << endl;
	cin >> yourNumber;

	myNumber = rand() % 100 + 1;

	cout << "My number is " << myNumber << " & your number is " << yourNumber << endl;

	if (yourNumber > myNumber) {
		cout << "Your number is bigger than mine :(" << endl;
	}else {
		cout << "My number is bigger than yours :)" << endl;
	}

	return 0;
}