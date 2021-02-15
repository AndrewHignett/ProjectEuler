#include <stdio.h>
#include <chrono>
using namespace std::chrono;

int main() {
	auto start = high_resolution_clock::now();
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	double sums = 0;

	return 0;
}