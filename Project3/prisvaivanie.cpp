#include<iostream>
#include<vector>
#include<string>
using namespace std;


//int main(void) {
//string s = "hello"
//string t = s;
//
//t += ", world";

//cout << "s = " << s << endl;
//cout << "t = " << t << endl;
//return 0;	
 //}


 // Получили вывод, где s = hello, а t = hello, world

int main() {
	vector<string> w = { "a", "b" ,"c"};
	vector<string> v;

	v = w;
	v[0] = "d";

	cout << w[0] << " " << w[1] << endl;
	cout << v[0] << " " << v[1] << endl;
	return 0;
}
// Получили вывод, где w[0] = a, w[1] = b,  а v[0] = d, v[1] = b 