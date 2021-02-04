#include <stdio.h>
#include <algorithm>

const int SIZE = 1000;
const int FACT = 100;

int main() {
	int factorial[SIZE] = { 0 };
	int length = 0;
	factorial[0] = 1;
	for (int i = 2; i <= FACT; i++){
		int bufferFac[SIZE] = { 0 };
		for (int j = 0; j < SIZE; j++) {
			int temp = factorial[j] * i;
			int position = j;
			while (temp > 0) {
				int addInt = temp % 10;
				temp = temp / 10;
				if (bufferFac[position] + addInt > 9) {
					bufferFac[position] += addInt - 10;
					temp++;
				}
				else {
					bufferFac[position] += addInt;
				}				
				length = std::max(length, position);
				position++;
			}

		}
		
		for (int k = 0; k < SIZE; k++) {
			factorial[k] = bufferFac[k];
		}
	}
	int sum = 0;
	for (int i = 0; i <= length; i++) {
		sum += factorial[i];
	}
	printf("%d\n", sum);
	return 0;
}