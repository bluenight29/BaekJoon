#include <iostream>
using namespace std;

int main()
{

	int input;
	cin >> input;
	int iLine = input * 2;
	int star = 0;

	//공백 8 6 4 2 0 2 4 6 8
	// 별  1 2 3 4 5 4 3 2 1
	for (int i = 0; i < input*2; ++i) {
		if (i < input) {
			iLine -= 2;
			star += 1;
		}
		else {
			iLine += 2;
			star -= 1;
		}
		for (int j = 0; j < star; ++j) {
			cout << "*";
		}
		for (int j = 0; j < iLine; ++j) {
			cout << " ";
 		}
		for (int j = 0; j < star; ++j) {
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}
