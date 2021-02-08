#include <stdio.h>
#include <math.h>

int main() {
	int maxSolutions = 0;
	int maxSolutionsP = 0;
	for (int p = 1; p < 1001; p++) {
		int solutions = 0;
		for (int i = 1; i <= p; i++) {
			for (int j = i; j <= p - i; j++) {
				for (int k = j; k <= p - i - j; k++) {
					if ((sqrt(i*i + j * j) == k) && (i + j + k == p)) {
						solutions++;
					}
				}
			}
		}
		if (solutions > maxSolutions) {
			maxSolutions = solutions;
			maxSolutionsP = p;
		}
	}
	printf("%d\n", maxSolutionsP);
}