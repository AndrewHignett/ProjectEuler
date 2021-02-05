#include <stdio.h>

int main() {
	int list[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int lexCount = 1;
	while (lexCount < 1000000) {
		int first = 0;
		for (int i = 0; i < 9; i++) {
			if ((list[i] < list[i + 1]) && (i > first)) {
				first = i;
			}
		}
		int second = 0;
		for (int j = first; j < 10; j++) {
			if ((list[j] > list[first]) && (j > second)) {
				second = j;
			}
		}
		int temp = list[second];
		list[second] = list[first];
		list[first] = temp;

		int range = 9 - first;
		int rangeCopy = 9 - first;
		for (int i = first + 1; i < 10 - rangeCopy/2; i++) {
			int a = first + range;
			temp = list[a];
			list[a] = list[i];
			list[i] = temp;
			
			range--;
		}
		lexCount++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
	return 0;
}