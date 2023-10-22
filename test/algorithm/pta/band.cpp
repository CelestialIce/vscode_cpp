#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N, id;
	queue<int> qA, qB;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> id;
		if (id % 2) {
			qA.push(id);
		} else {
			qB.push(id);
		}
	}

	while (!qA.empty() || !qB.empty()) {
		if (!qA.empty()) {
			cout << qA.front() << " ";
			qA.pop();
		}
		if (!qA.empty()) {
			cout << qA.front() << " ";
			qA.pop();
		}
		if (!qB.empty()) {
			cout << qB.front() << " ";
			qB.pop();
		}
	}

	return 0;
}
