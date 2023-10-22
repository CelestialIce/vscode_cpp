// LongestSymmetricSubstring.cpp
#include <cstring>
#include <iostream>

using namespace std;

const int MAXN = 1000;

char s[MAXN + 2];

int centerExpand(int left, int right) {
	while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
		left--;
		right++;
	}
	return right - left -
		   1;  // 因为在循环终止时，left和right分别指向不匹配的字符，所以长度需要减去2
}

int main() {
	cin.getline(s, MAXN + 1);

	int maxLength = 0;
	for (int i = 0; i < strlen(s); i++) {
		// 以字符s[i]为中心的奇数长度的对称子串
		int len1 = centerExpand(i, i);
		// 以字符s[i]和s[i+1]为中心的偶数长度的对称子串
		int len2 = centerExpand(i, i + 1);
		maxLength = max(maxLength, max(len1, len2));
	}

	cout << maxLength << endl;
	return 0;
}
