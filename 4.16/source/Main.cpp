#include <iostream>
using namespace std;

int main() {
	cout << "(A)" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j <= i) printf("%s", "*");
		}
		cout << endl;
	}
	cout << endl;
	cout << "(B)" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j < 10-i) printf("%s", "*");
		}
		cout << endl;
	}
	cout << endl;
	cout << "(C)" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf((i>j) ? " ":("%s","*") );
		}
		cout << endl;
	}
	cout << endl;
	cout << "(D)" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf((j + i >= 9) ? ("%s", "*") : " ");
		}
		cout << endl;
	}
	return 0;
}