#include <iostream>
using namespace std;

int main() {

	float sells;
	while (1) {
		cout << "Enter sales in dollars (-1 to end): ";
		cin >> sells;
		if ((int)sells == -1) break;
		printf("Salary is : $%.2f\n\n", (sells*0.09 + 200));
			
	}
	
	return 0;
}