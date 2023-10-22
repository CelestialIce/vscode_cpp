#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	list<int> list1, list2, list3;
	int x;

	// 读取第一个链表
	while (cin >> x) {
		if (x == -1)
			break;
		list1.push_back(x);
	}

	// 读取第二个链表
	while (cin >> x) {
		if (x == -1)
			break;
		list2.push_back(x);
	}

	// 初始化两个链表的迭代器
	auto it1 = list1.begin();
	auto it2 = list2.begin();

	// 寻找交集
	while (it1 != list1.end() && it2 != list2.end()) {
		if (*it1 == *it2) {
			list3.push_back(*it1);
			++it1;
			++it2;
		} else if (*it1 < *it2) {
			++it1;
		} else {
			++it2;
		}
	}

	// 输出结果
	if (list3.empty()) {
		cout << "NULL";
	} else {
		auto it = list3.begin();
		cout << *it;
		++it;
		for (; it != list3.end(); ++it) {
			cout << " " << *it;
		}
	}
	cout << endl;

	return 0;
}
