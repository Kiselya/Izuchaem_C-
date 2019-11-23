#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	double A, B, C, x1, x2;
	double D;
	cin >> A >> B >> C;
	// Ax² + Bx + C = 0
 D = (B*B)-(4*A*C);
 if (A == 0) {
	 if (B != 0) {
		 cout << -C / B;
	 }
 }
else if (D > 0) {
		x1 = (-B + sqrt(D))/(2*A);
		x2 = (-B - sqrt(D))/(2*A);
		cout << x1 << " " << x2;
	}
	else if (D == 0) {
		cout << -B / (2 * A);
	}
	return 0;
}