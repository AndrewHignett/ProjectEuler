#include <stdio.h>
#include <fstream>
#include <string>
#include <map>
#include <iterator>
#include <iostream>
using namespace std;

int main() {
	string names;
	ifstream readFile("p022_names.txt");
	int count = 0;
	map<string, int> nameScores;
	while (getline(readFile, names, ',')) {
		count++;
		names = names.substr(1, names.length() - 2);
		int score = 0;
		for (int i = 0; i < names.length(); i++) {
			score += names[i] - 64;
		}
		nameScores[names.c_str()] = score;

	}
	std::map<std::string, int>::iterator it = nameScores.begin();
	int iteratorCount = 1;
	int sum = 0;
	while (it != nameScores.end()) {
		string name = it->first;
		int score = it->second;
		cout << name << " :: " << score << endl;
		sum += iteratorCount * score;
		it++;
		iteratorCount++;
		printf("%d\n", sum);
	}
	readFile.close();
	return 0;
}