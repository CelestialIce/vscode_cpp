
#include<iostream>
using namespace std;
 
const int N = 55;
int m, n, cntroom, roomarea, maxarea;
int room[N][N];
bool st[N][N];
 
void dfs(int x, int y){
 
	st[x][y] = true;
	++ roomarea;
	int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};
	for(int i = 0; i < 4; ++ i){
		int nx = dx[i] + x, ny = dy[i] + y;
		if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
		//cout << 'b' << endl;
		if(st[nx][ny]) continue;
		if(room[x][y] >> i & 1) continue;
		dfs(nx, ny);
	}
}
 
int main(){
  cin >> m >> n;
  for(int i = 0; i < m; ++ i){
  	 for(int j = 0; j < n; ++ j){
  	 	cin >> room[i][j];
	   }
  }	
  
  for(int i = 0; i < m; ++ i){
  	 for(int j = 0; j < n; ++ j){
  	 	 if(!st[i][j]){
  	 		++ cntroom; roomarea = 0;
  	 		dfs(i, j);
  	 		maxarea = max(maxarea, roomarea);
		   }
	   }
  }	
 
  
  cout << cntroom << endl;
  cout << maxarea;
}