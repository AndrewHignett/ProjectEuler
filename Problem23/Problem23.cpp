#include <stdio.h>
#include <stdlib.h>

bool isAbundantSum(int a, int *abundantNumbers, int nCount) {
	for (int i = 0; i < nCount; i++) {
		for (int j = 0; j < nCount; j++) {
			if (abundantNumbers[i] + abundantNumbers[j] == a) {
				return true;
			}
		}
	}
	return false;
}

int main() {

	int count = 0;
	for (int i = 2; i < 28124; i++) {
		int factors = 1;
		for (int j = 2; j < i / 2 + 1; j++) {
			if (i%j == 0) {
				factors += j;
			}
		}
		if (factors > i) {
			count++;
		}
	}
	int *abundantNumbers = (int*)malloc(sizeof(int)*count);
	int abundantCount = 0;
	for (int i = 2; i < 28124; i++) {
		int factors = 1;
		for (int j = 2; j < i / 2 + 1; j++) {
			if (i%j == 0) {
				factors += j;
			}
		}
		if (factors > i) {
			abundantNumbers[abundantCount] = i;
			abundantCount++;
		}
	}
	int sum = 0;
	for (int i = 1; i < 28124; i++) {
		if (!(isAbundantSum(i, abundantNumbers, abundantCount))) {
			sum += i;
		}
	}
	printf("%d\n", sum);
	free(abundantNumbers);
	return 0;
}