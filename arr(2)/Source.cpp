#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	const int ROW = 5;
	const int COL = 5;
	int arr[ROW][COL]{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,0,56,15},
		{15,14,13,12,11},
		{10,9,8,7,6}
	};

	for (int i=0; i < ROW; i++) {
		for (int k=0; k < COL; k++) {
			cout << arr[i][k] << "\t";
		}
		cout << endl;
	}

	int sum = 0;
	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {
			sum += arr[i][k];
		}
	}
	cout << endl << "Sum = " << sum << endl;

	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {
			sum += arr[i][k];
		}
	}
	cout << endl << "Average = " << sum/ (sizeof(arr) / sizeof(int)) << endl;

	int MinValue = arr[0][0];
	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {
			if (arr[i][k] < MinValue) {
				MinValue = arr[i][k];
			}
		}
	}
	cout << endl << "MinValue = " << MinValue << endl;

	int MaxValue = arr[0][0];
	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {
			if (arr[i][k] > MaxValue) {
				MaxValue = arr[i][k];
			}
		}
	}
	cout << endl << "MaxValue = " << MaxValue << endl;

	system("pause>nul");
	return 0;
}