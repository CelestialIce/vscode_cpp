// KMPStringMatching.cpp
#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 1000010;

char text[MAXN], pattern[MAXN];
int nextString[MAXN];

void getNext(char pattern[], int m, int nextString[]) {
	nextString[0] = 0;
	int j = 0;
	for (int i = 1; i < m; i++) {
		while (j > 0 && pattern[i] != pattern[j]) {
			j = nextString[j - 1];
		}
		if (pattern[i] == pattern[j]) {
			j++;
		}
		nextString[i] = j;
	}
}

void KMP(char text[], char pattern[]) {
	int n = strlen(text);
	int m = strlen(pattern);

	getNext(pattern, m, nextString);

	int j = 0;
	for (int i = 0; i < n; i++) {
		while (j > 0 && text[i] != pattern[j]) {
			j = nextString[j - 1];
		}
		if (text[i] == pattern[j]) {
			j++;
		}
		if (j == m) {
			cout << i - m + 2 << endl;	// 1-based index
			j = nextString[j - 1];
		}
	}
}

int main() {
	cin >> text >> pattern;
	KMP(text, pattern);

	// Print the nextString array
	for (int i = 0; i < strlen(pattern); i++) {
		if (i != 0)
			cout << " ";
		cout << nextString[i];
	}
	cout << endl;

	return 0;
}
