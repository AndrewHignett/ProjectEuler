#include <stdio.h>

int main() {
	int fib[1000] = { 0 };
	int a[1000] = { 0 };
	int b[1000] = { 0 };
	a[0] = 1;
	b[0] = 1;
	int index = 2;
	while (fib[999] == 0) {
		index++;
		for (int i = 0; i < 1000; i++) {
			fib[i] = 0;
		}
		for (int i = 0; i < 1000; i++) {
			int temp = a[i] + b[i];
			int multi = temp / 10;
			if (fib[i] + temp % 10 < 10){
				fib[i] += temp % 10;
			}
			else {
				multi += (fib[i] + temp % 10) / 10;
				fib[i] = (fib[i] + temp % 10) % 10;
			}
			int addition = 1;
			while (multi > 0) {
				temp = fib[i + addition] + multi;
				fib[i + addition] += temp % 10;
				multi = temp / 10;
				addition++;
			}
		}
		for (int i = 0; i < 1000; i++) {
			a[i] = b[i];
			b[i] = fib[i];
		}
	}
	printf("%d\n", index);
	return 0;
}