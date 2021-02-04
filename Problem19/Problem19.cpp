#include <stdio.h>

int main() {
	int months[12] = { 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
	//special case - year 2000, 29th feb doesn't exist
	//year%4 = 0, months[1] = 29 not 28
	int day = -1; //start on a day to account for the addition of the final month of 1900
	int sundayStarts = 0;
	for (int year = 1901; year < 2001; year++) {
		int monthName = 1;
		for (auto month : months) {
			if ((month == 28) && (year%4 == 0)) {
				day += 29;
			}
			else {
				day += month;
			}
			if (day % 7 == 0) {
				sundayStarts++;
			}
			monthName++;

		}
	}
	printf("%d\n", sundayStarts);
	return 0;
}