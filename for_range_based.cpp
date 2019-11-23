#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, int> b = { {"a", 1}, {"b", 2}, {"c", 3} };
	vector <int> a = { 1, 4, 6, 8, 10 };

	int sum = 0;
	string concat;
	for (auto i : b) {
		concat += i.first;
		sum += i.second;
	}

	cout << concat << endl;
	cout << sum;

	return 0;
}

// Получили в ответе : abc
  //                   6 
