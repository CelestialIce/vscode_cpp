#include <stdio.h>
void MingPick(int left, int k, int turn);
void QiangPick(int left, int k, int turn);


void MingPick(int left, int k, int turn) {
	if (left - k * turn <= 0) {
		printf("MING!\n");
		printf("%d", turn);
	} else {
		QiangPick( left - k * turn,  k,  turn + 1);
	}
}

void QiangPick(int left, int k, int turn) {
	if (left - k * turn <= 0) {
		printf("QIANG!\n");
		printf("%d", turn);
	} else {
		MingPick( left - k * turn,  k,  turn + 1) ;
	}
}

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	MingPick(n, k, 1);
	return 0;
}
