#include <iostream>
#include <string>
#include <vector>
#include<map>
using namespace std;

// int main() {
	//	string a = "fire";
	//	string b = "fog";
	//	if (a == b) {
		//		cout << "a is equal to b";
		//	}
	//	else {
		// cout << "a isn't equal to b";
		//}
	//	return 0;
//}
// Получили ответ, что "a isn't equal to b"

//int main() {
//	vector<string> a = { "fire", "water" };
//	vector<string> b = { "fog" , "air" };
//	if (a == b) {
		//		cout << "a is equal to b";
//	}
//	else {
//		cout << "a isn't equal to b";
//	}
//	return 0;
//}
// Получили ответ "a isn't equal to b"

// int main() {
//	map<string, int> a;
//	a["one"] = 1;
//	map <string, int> b;
//	if (a == b) {
//		cout << "a is equal to b";
//	}
//	else {
//		cout << "a isn't equal to b";
//	}
//		return 0;
//	} 
// Получили ответ "a isn't equal to b" т.е. в a у нас есть запись, а b у нас пустой

int main() {
	string s = "abc";
	if (!s.empty() && s < "zzz") {
		cout << s;
	}
	return 0;
}
// Получили ответ "abc"