#include <stdio.h>
#include <string>
using namespace std;

bool sameDigits(int a) {
	string digits = to_string(a);
	int length = digits.length();
	for (int i = 2; i < 7; i++) {
		string theseDigits = to_string(a*i);
		int count = 0;
		for (int j = 0; j < theseDigits.length(); j++) {
			if (digits.find(theseDigits[j]) == -1) {
				return false;
			}
		}
		for (int j = 0; j < digits.length(); j++) {
			if (theseDigits.find(digits[j]) == -1) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int number = 1;
	do {
		number++;
	}
	while (!sameDigits(number));
	printf("%d\n", number);
	return 0;
}