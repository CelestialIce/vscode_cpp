#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class IntStack {
private:
	static const int MAX_SIZE = 1000;  // 根据需要设置
	int arr[MAX_SIZE];
	int topIndex;

public:
	IntStack() : topIndex(-1) {}

	void push(int value) {
		if (topIndex >= MAX_SIZE - 1) {
			cerr << "Stack overflow" << endl;
			exit(1);
		}
		arr[++topIndex] = value;
	}

	void pop() {
		if (topIndex < 0) {
			cerr << "Stack underflow" << endl;
			exit(1);
		}
		topIndex--;
	}

	int top() const {
		if (topIndex < 0) {
			cerr << "Stack is empty" << endl;
			exit(1);
		}
		return arr[topIndex];
	}

	bool empty() const { return topIndex < 0; }

	int size() const { return topIndex + 1; }
};

int main() {
	IntStack s;
	string str, token;
	getline(cin, str);
	stringstream ss(str);

	while (ss >> token) {
		if (token == "+") {
			if (s.size() < 2) {
				cout << "Expression Error: " << s.top() << endl;
				return 0;
			}
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b + a);
		} else if (token == "-") {
			if (s.size() < 2) {
				cout << "Expression Error: " << s.top() << endl;
				return 0;
			}
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b - a);
		} else if (token == "*") {
			if (s.size() < 2) {
				cout << "Expression Error: " << s.top() << endl;
				return 0;
			}
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b * a);
		} else if (token == "/") {
			if (s.size() < 2) {
				cout << "Expression Error: " << s.top() << endl;
				return 0;
			}
			int a = s.top();
			s.pop();
			if (a == 0) {
				cout << "Error: " << s.top() << "/0" << endl;
				return 0;
			}
			int b = s.top();
			s.pop();
			s.push(b / a);
		} else if (token == "#") {
			if (s.size() == 1) {
				cout << s.top() << endl;
				return 0;
			} else {
				cout << "Expression Error: " << s.top() << endl;
				return 0;
			}
		} else {
			s.push(stoi(token));
		}
	}

	return 0;
}
