#include <stdio.h>

int main() {
	int max = 100;
	int uniqueCheckouts = 0;
	//if <= 20, then can be trebbled
	int darts[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 25 };
	int doubledUp = 0;
	for (int i = 0; i < 21; i++) {
		int sum = darts[i] * 2;
		if (sum < max){
			uniqueCheckouts++;
		}
		for (int j = 0; j < 62; j++) {
			int dart1 = 0;
			if (j < 21) {
				dart1 = darts[j];
			}
			else if (j < 42) {
				dart1 = darts[j - 21] * 2;
			}
			else {
				dart1 = darts[j - 42] * 3;
			}
			if (sum + dart1  < max){
				uniqueCheckouts++;
			}
			for (int k = 0; k < 62; k++) {
				int dart2 = 0;
				if (k < 21) {
					dart2 = darts[k];
				}
				else if (k < 42) {
					dart2 = darts[k - 21] * 2;
				}
				else {
					dart2 = darts[k - 42] * 3;
				}
				if (sum + dart1 + dart2 < max) {
					uniqueCheckouts++;
					if (j != k){
						doubledUp++;
					}
				}
			}
		}
	}
	printf("%d\n", uniqueCheckouts - doubledUp/2);
}