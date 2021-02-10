#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

bool palindromeInt(int base10) {
	string string10 = to_string(base10);
	int length = string10.length();
	bool palindromic = true;
	for (int i = 0; i < length/2; i++) {
		if (string10[i] != string10[length - i - 1]) {
			palindromic = false;
		}
	}
	return palindromic;
}

bool palindromeArr(int binary[20]) {
	bool palindromic = true;
	int length = 0;
	int j = 19;
	while (binary[j] == 0) {
		j--;
	}
	length = j + 1;
	for (int i = 0; i < j / 2 + 1; i++) {
		if (binary[i] != binary[length - i - 1]) {
			palindromic = false;
		}
	}
	return palindromic;
}

int main() {
	int palSum = 0;
	for (int i = 1; i < 1000000; i++) {
		int base2[20] = { 0 };
		if (palindromeInt(i)) {
			int binary = 0;
			int remainder = i;
			while (remainder > 0) {
				base2[(int)log2(remainder)] = 1;
				remainder -= pow(2, (int)log2(remainder));
			}
			
			if (palindromeArr(base2)) {
				palSum += i;
			}
		}
	}
	printf("%d\n", palSum);
	return 0;
}