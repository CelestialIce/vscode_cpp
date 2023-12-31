#include <stdio.h>

int perm[15] = { 0 };
int ptr_perm = 0;
int has_chosen[15] = { 0 };

void permutation(int n, int m, int k) {
	if (m == 0) {
		int i;
		for (i = 0; i < ptr_perm; ++i)
			printf("%d ", perm[i]);
		printf("\n");
		return;
	}

	int i;
	for (i = k; i <= n; ++i) {
		if (!has_chosen[i]) {
			perm[ptr_perm++] = i;
			has_chosen[i] = 1;
			permutation(n, m - 1, i + 1);
			has_chosen[i] = 0;
			ptr_perm--;
		}
	}
}

int main() {
	int n, m;

	scanf("%d %d", &n, &m);
	permutation(n, m, 1);

	return 0;
}