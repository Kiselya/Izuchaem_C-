#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	int cnt = count(str.begin(), str.end(), 'f');
	if (cnt == 1) cout << -1;
	else if (cnt == 0) cout << -2;
	else cout << str.find('f') + (str.substr(str.find('f') + 1, str.size() - 1)).find('f') + 1;
	return 0;
}