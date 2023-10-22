#include<iostream>
#include<queue>
#include<unordered_set>
using namespace std;

int main() { 
    int M, N;
	cin >> M >> N;

	queue<int> memQueue;
	unordered_set<int> memSet;

	int count = 0;
    for (int i = 0; i < N; i++)
    {
		int word;
		cin >> word;

        if(memSet.find(word)==memSet.end()){
            if(memQueue.size()==M){
				int toRemove = memQueue.front();
				memQueue.pop();
				memSet.erase(toRemove);
			}

			memQueue.push(word);
			memSet.insert(word);
			++count;
		}
	}

	cout << count << endl;
	return 0;
}