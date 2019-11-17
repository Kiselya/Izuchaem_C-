#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> hi = { 1,2,5,5,2,3,6,7,8,9,1,234,235,23,67,843,135,82753975,5,6,7,2,2,5,346,346,34,63,46,3,46,346,3,46,34,6,23,4,123,12,3,543,6 };
	auto quantity = count(begin(hi), end(hi), 65);
	if (quantity == 0) {
		cout << "Ooops";
} else {
cout << "There are " << quantity << "doubles";
	}
	return 0;
}


