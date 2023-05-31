#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	const int ROW = 5;
	const int COL = 5;
	int arr[ROW][COL]{
		{1,1,1,1,1},
		{2,2,2,2,2},
		{3,3,3,3,3},
		{4,4,4,4,4},
		{5,5,5,5,5}
	};
	for (int i = 0; i < ROW; i++) {
		int sum1 = 0;
		int sum2 = 0;
		for (int k = 0; k < COL; k++) {
			cout << arr[i][k] << "\t";
			sum1 += arr[i][k];
			sum2 += arr[k][i];
			cout << sum2;
		}
		cout <<sum1<< endl;
	}

	system("pause>nul");
	return 0;
}