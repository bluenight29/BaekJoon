#include <iostream>
using namespace std;

int main()
{
	//5
	//별  9 7 5 3 1 3 5 7 9
	// 공백 0 1 2 3 4 3 2 1 0
	int iInput;
	cin >> iInput;
	int iLine = 0;
	int iStar = iInput*2-1;

	for (int i = 1; i < iInput * 2; ++i) {
		
		for (int j = 0; j < iLine; ++j) {
			cout << " ";
		}
		for (int j = 0; j <iStar ; ++j) {
			cout << "*";
		}

		if (i < iInput) {
			iStar -= 2;
			iLine += 1;
		}
		else {
			iStar += 2;
			iLine -= 1;
		}
		cout << endl;
	}

	return 0;
}
