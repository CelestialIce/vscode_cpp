#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int main() {
	int M, N;  // M为内存大小，N为文章长度
	cin >> M >> N;

	queue<int> memQueue;		// 用于模拟内存的队列
	unordered_set<int> memSet;	// 用于快速查找的哈希表

	int count = 0;	// 查字典次数
	for (int i = 0; i < N; ++i) {
		int word;
		cin >> word;  // 输入单词对应的整数

		if (memSet.find(word) == memSet.end()) {  // 如果单词不在内存中
			if (memQueue.size() == M) {			  // 如果内存已满
				int toRemove = memQueue.front();  // 得到需要移除的单词
				memQueue.pop();					  // 从队列中移除
				memSet.erase(toRemove);			  // 从哈希表中移除
			}

			memQueue.push(word);  // 将新单词加入队列
			memSet.insert(word);  // 将新单词加入哈希表
			++count;			  // 查字典次数加1
		}
	}

	cout << count << endl;	// 输出查字典次数

	return 0;
}
