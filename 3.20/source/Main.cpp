#include <iostream>
using namespace std;

int main() {
	int hours;
	float rate,sum;
	while(1){

	cout << "Enter # of hours worked (-1 to end): ";
	cin >> hours;
	if (hours == -1) break;
	cout << "Enter hourly rate of the worker ($00.00): ";
	cin >> rate;
	if (hours <= 40) {
		sum = hours * rate;
	}else{
		sum = 40 * rate;
		sum+= (hours-40)*1.5 * rate;
	}

	printf("Salary is $%.2f\n\n",sum);
	}
	return 0;
}