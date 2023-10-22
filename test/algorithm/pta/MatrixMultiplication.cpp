// MatrixMultiplication.cpp
#include <cstdio>
#include <iostream>

using namespace std;

const int MAXR = 110;
const int MAXC = 110;

int matrixA[MAXR][MAXC], matrixB[MAXR][MAXC], result[MAXR][MAXC];

int main() {
	int Ra, Ca, Rb, Cb;
	cin >> Ra >> Ca;

	for (int i = 0; i < Ra; i++) {
		for (int j = 0; j < Ca; j++) {
			cin >> matrixA[i][j];
		}
	}

	cin >> Rb >> Cb;

	for (int i = 0; i < Rb; i++) {
		for (int j = 0; j < Cb; j++) {
			cin >> matrixB[i][j];
		}
	}

	if (Ca != Rb) {
		cout << "Error: " << Ca << " != " << Rb << endl;
		return 0;
	}
	cout << Ra << ' ' << Cb << endl;
	for (int i = 0; i < Ra; i++) {
		for (int j = 0; j < Cb; j++) {
			result[i][j] = 0;
			for (int k = 0; k < Ca; k++) {
				result[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}

	for (int i = 0; i < Ra; i++) {
		for (int j = 0; j < Cb; j++) {
			if (j != 0)
				cout << " ";
			cout << result[i][j];
		}
		cout << endl;
	}

	return 0;
}
