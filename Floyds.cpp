#include <iostream>
#define size 5
using namespace std;
void Floyds() {
	int matrix[size][size], row = 0, col = 0, con = 0 ;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++) 
			cin >> matrix[i][j];
	for (col ; col < size; col++)
		for (row ; row < size; row++)
			for (con; con < size; con++)
				if ((matrix[row][col] * matrix[col][con] != 0) && (row != con))
					if ((matrix[row][col] + matrix[col][con] < matrix[row][con]) || (matrix[row][con] == 0))
						matrix[row][con] = matrix[row][col] + matrix[col][con];
	for (row = 0; row < size; row++) {
		cout << endl;
		for (con = 0; con < size; con++)
			cout << matrix[row][con] << "\t";
	}
}
void main() {
	Floyds();
}