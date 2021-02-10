#include <stdio.h>
#include <string>
#include <math.h>

int main() {
	int digitPowers = 0;
	//max would be 6*9^5 = 354294
	for (int i = 2; i <= 354294; i++) {
		int sum = 0;
		int remainder = i;
		while (remainder > 0) {
			sum += pow(remainder % 10, 5);
			remainder = remainder / 10;
		}
		if (i == sum) {
			digitPowers += i;
		}
	}
	printf("%d\n", digitPowers);
	return 0;
}