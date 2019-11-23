#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPaalindrom(string w) {

	for (int i = 0; i < w.size() / 2; ++i) {
		if (w[i] != w[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

