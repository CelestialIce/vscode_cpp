// TransposeAndSortSparseMatrix.cpp
#include <cstdio>
#include <iostream>

using namespace std;

const int MAXT = 1010;

struct Triple {
	int row, col, value;
};

Triple matrix[MAXT], transposed[MAXT];

void sortTriple(Triple arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j].row > arr[j + 1].row ||
				(arr[j].row == arr[j + 1].row && arr[j].col > arr[j + 1].col)) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int m, n, t;
	cin >> m >> n >> t;

	for (int i = 0; i < t; i++) {
		cin >> matrix[i].row >> matrix[i].col >> matrix[i].value;
	}

	for (int i = 0; i < t; i++) {
		transposed[i].row = matrix[i].col;
		transposed[i].col = matrix[i].row;
		transposed[i].value = matrix[i].value;
	}

	// Sort transposed matrix
	sortTriple(transposed, t);

	for (int i = 0; i < t; i++) {
		cout << transposed[i].row << " " << transposed[i].col << " "
			 << transposed[i].value << endl;
	}

	return 0;
}
