#include <iostream>
using namespace std;

int main() {
	for (int i = 2; i <= 500; i++) {
		for (int j = 2; j <= 500; j++){
			for (int k = 2; k <= 500; k++) {
				if(i + j > k && i + k > j && j + k > i && k*k==i*i+j*j){
					printf("side1:%5d side2:%5d hypotenuse:%5d\n", i, j, k);
				}
			}
		}
	}
	
	return 0;
}