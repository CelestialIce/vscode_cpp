#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 10;
int maze[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
vector<pair<int, int>> path;

bool dfs(int x, int y) {
	visited[x][y] = true;
	path.push_back({x, y});

	if (x == n - 2 && y == n - 2)
		return true;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny] &&
			maze[nx][ny] == 0) {
			if (dfs(nx, ny))
				return true;
		}
	}

	path.pop_back();
	return false;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) cin >> maze[i][j];

	if (dfs(1, 1)) {
		for (int i = 0; i < path.size(); ++i) {
			cout << "(" << path[i].first << "," << path[i].second << ")";
			if (i != path.size() - 1)
				cout << "";
		}
	} else {
		cout << "NO";
	}

	return 0;
}
