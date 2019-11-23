#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector <int> hi = { 1,5,3,2,5,6,1,243,6,32,3453,345,123,5,6558,2,3,54,723,4,636752,3246362,11243,62346346,1234,454,634463,12312,524653,63461243,6346324,1243546,123,4 };
	sort(begin(hi), end(hi));
	for (auto x : hi) {
		cout << x << " ";
	}
	return 0;
}