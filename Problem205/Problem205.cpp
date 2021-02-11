#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	double cWin = 0;
	double pWin = 0;
	double draw = 0;
	int cCount[36] = { 0 };
	int pCount[36] = { 0 };
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j < 7; j++) {
			for (int k = 1; k < 7; k++) {
				for (int l = 1; l < 7; l++) {
					for (int m = 1; m < 7; m++) {
						for (int n = 1; n < 7; n++) {
							int cScore = i + j + k + l + m + n;
							cCount[cScore - 1]++;
						}
					}
				}
			}
		}
	}
	for (int o = 1; o < 5; o++) {
		for (int p = 1; p < 5; p++) {
			for (int q = 1; q < 5; q++) {
				for (int r = 1; r < 5; r++) {
					for (int s = 1; s < 5; s++) {
						for (int t = 1; t < 5; t++) {
							for (int u = 1; u < 5; u++) {
								for (int v = 1; v < 5; v++) {
									for (int w = 1; w < 5; w++) {
										int pScore = o + p + q + r + s + t + u + v + w;
										pCount[pScore - 1]++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < 36; i++) {
		for (int j = i + 1; j < 36; j++) {
			pWin += pCount[j]*cCount[i];
		}
		for (int j = 0; j < i; j++) {
			cWin += cCount[i]*pCount[j];
		}
		draw += cCount[i] * pCount[i];
	}
	double prob = pWin / (cWin + pWin + draw);
	cout.precision(7);
	cout << fixed << prob << endl;
	return 0;
}