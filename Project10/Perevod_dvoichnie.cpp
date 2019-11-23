#include <iostream>

#include <vector>

using namespace std;



int main()

{

unsigned int n;
	vector<bool> result;
	//unsigned int reminder = 1;
	cin >> n;
 if (n == 0)
	{
		cout << 0;
	}
	else
	{
		while (n != 0)
		{
			result.push_back(n % 2);
			n /= 2;
		}
		for (int i = result.size() - 1; i >= 0; --i)

			cout << result[i];
	}
	system("pause");

	return 0;

}

