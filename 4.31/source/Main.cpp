#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9;j++) cout << (((j < 5 + i && j>5 - i && i <= 5) || (j < 15 - i && j>i - 5 && i > 5)) ? "*" : " ");
		cout << endl;
	}
	return 0;
}

