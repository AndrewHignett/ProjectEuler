#include <stdio.h>
#include <math.h>

bool isPent(int test) {
	double sq = sqrt(12 * test + 1);
	sq++;
	sq = sq / 6;
	double intpart;
	sq = modf(sq, &intpart);
	if (sq == 0) {
		return true;
	}
	return false;
}

int main() {
	/*
	n = 1 + sqrt(1 + 12*(3x^2 - x - 3y^2 + y))/6
	->
	n(3n - 1) = x(3x - 1) - y (3y - 1)
	increment though numbers n, looping all x and y values, until this can be satisfied
	x and y must be limited in the range:
	min n from m
	ceiling((3m^2 - m + 4)/6) <= n
	max n from m
	3m^2 - m + 2 = n(3n - 1)

	*/
	int pentNum = 0;
	double n = 2;
	while (pentNum == 0) {
		int min = ceil((1 + sqrt(1 + 12 * (3 * n*n - n + 4))) / 6);
		int max = floor((3 * n*n - n + 4) / 6);
		for (int i = min; i < max; i++) {
			//printf("%f %f\n", n, ceil((3 * n*n - n + 4) / 6));
			for (int j = min; j < max; j++) {
				if (i != j){
					if (isPent(abs(i*(3 * i - 1) - j * (3 * j - 1))) && isPent((i*(3 * i - 1) + j * (3 * j - 1)))){
						//printf("%d %d %f %f %f %f\n", min, max, n, abs(i*(3 * i - 1) - j * (3 * j - 1)), (i*(3 * i - 1) + j * (3 * j - 1)), n * (3 * n - 1));
						//printf("%d %d %d %d\n", i, j, isPent(abs(i*(3 * i - 1) - j * (3 * j - 1))), isPent((i*(3 * i - 1) + j * (3 * j - 1))));
						printf("%d %d %d\n", i, j, (i*(3 * i - 1) - (j * (3 * j - 1))));
					}
					if (abs(i*(3 * i - 1) - j * (3 * j - 1)) == n * (3 * n - 1) && isPent((i*(3*i - 1) + j*(3*j-1)))) {
						pentNum = n;						
					}
				}
			}
		}
		n++;
	}
	printf("%d\n", pentNum);
	return 0;
}