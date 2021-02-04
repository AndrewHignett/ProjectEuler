#include <stdio.h>

int main() {
	int max = 10000;
	int sum = 0;
	bool used[10000] = { false };
	for (int i = 2; i < max; i++) {
		if (!used[i]) {
			int a = 1;
			int b = 1;
			for (int j = 2; j <= i / 2; j++) {
				if (i % j == 0) {
					a += j;
				}
			}
			//d(i) = a
			//d(a) = b = i
			for (int j = 2; j <= a / 2; j++) {
				if (a % j == 0) {
					b += j;
				}
			}
			if ((b == i) && (a != b)) {
				used[i] = true;
				used[a] = true;
				sum += i + a;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}