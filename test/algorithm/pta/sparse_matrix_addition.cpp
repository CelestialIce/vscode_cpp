// sparse_matrix_addition.cpp
#include <cstdio>
#include <iostream>

using namespace std;

struct Node {
	int row, col;
	int value;
	Node* next;
};

Node* insert(Node* head, int row, int col, int value) {
	Node* newNode = new Node();
	newNode->row = row;
	newNode->col = col;
	newNode->value = value;
	newNode->next = NULL;

	if (!head) {
		return newNode;
	}

	Node* temp = head;
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = newNode;

	return head;
}

Node* addMatrices(Node* A, Node* B) {
	Node* C = NULL;
	while (A && B) {
		if (A->row == B->row && A->col == B->col) {
			int sum = A->value + B->value;
			if (sum) {
				C = insert(C, A->row, A->col, sum);
			}
			A = A->next;
			B = B->next;
		} else if ((A->row < B->row) || (A->row == B->row && A->col < B->col)) {
			C = insert(C, A->row, A->col, A->value);
			A = A->next;
		} else {
			C = insert(C, B->row, B->col, B->value);
			B = B->next;
		}
	}

	while (A) {
		C = insert(C, A->row, A->col, A->value);
		A = A->next;
	}

	while (B) {
		C = insert(C, B->row, B->col, B->value);
		B = B->next;
	}

	return C;
}

int main() {
	int Row, Col, N1, N2;
	cin >> Row >> Col;

	Node* A = NULL;
	Node* B = NULL;

	cin >> N1;
	for (int i = 0; i < N1; i++) {
		int row, col, value;
		cin >> row >> col >> value;
		A = insert(A, row, col, value);
	}

	cin >> N2;
	for (int i = 0; i < N2; i++) {
		int row, col, value;
		cin >> row >> col >> value;
		B = insert(B, row, col, value);
	}

	Node* C = addMatrices(A, B);

	int count = 0;
	Node* temp = C;
	while (temp) {
		count++;
		temp = temp->next;
	}

	cout << count << endl;
	temp = C;
	while (temp) {
		cout << temp->row << " " << temp->col << " " << temp->value << endl;
		temp = temp->next;
	}

	return 0;
}
