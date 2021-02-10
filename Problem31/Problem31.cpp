#include <stdio.h>

int main() {
	int permutations = 0;
	for (int i = 0; i <= 200; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 40; k++) {
				for (int l = 0; l <= 20; l++) {
					for (int m = 0; m <= 10; m++) {
						for (int n = 0; n <= 4; n++) {
							for (int o = 0; o <= 2; o++) {
								if (i + 2 * j + 5 * k + 10 * l + m * 20 + n * 50 + o * 100 == 200) {
									permutations++;
								}
								else if (i + 2 * j + 5 * k + 10 * l + m * 20 + n * 50 + o * 100 == 0) {
									permutations++;
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d\n", permutations);
	return 0;
}