#include <stdio.h>

int main() {
	int n = 0, i = 0, k = 0, j = 0;
	scanf("%d", &n);
	struct stu {
		long long mark;
		int chinese;
		int math;
		int eng;
		int phy;
		int che;
		int bio;
		int seq;
	} studen[n], temp;
	for (i = 0; i < n; i++) {
		scanf("%lld %d %d %d %d %d %d",
		      &studen[i].mark, &studen[i].chinese,
		      &studen[i].math, &studen[i].eng,
		      &studen[i].phy, &studen[i].che,
		      &studen[i].bio);
		studen[i].seq = i + 1;
	}
	//printf("%lld %d", studen[1].mark, studen[1].seq);
	scanf("%d", &k);
	switch (k) {
		case 1:
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (studen[j].chinese < studen[j + 1].chinese || studen[j].chinese == studen[j + 1].chinese
					        && studen[j].mark > studen[j + 1].mark) {
						temp = studen[j];
						studen[j] = studen[j + 1];
						studen[j + 1] = temp;
					}
				}
			}
			break;
		case 2:
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (studen[j].math < studen[j + 1].math || studen[j].math == studen[j + 1].math
					        && studen[j].mark > studen[j + 1].mark) {
						temp = studen[j];
						studen[j] = studen[j + 1];
						studen[j + 1] = temp;
					}
				}
			}
			break;
		case 3:
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (studen[j].eng < studen[j + 1].eng || studen[j].eng == studen[j + 1].eng && studen[j].mark > studen[j + 1].mark) {
						temp = studen[j];
						studen[j] = studen[j + 1];
						studen[j + 1] = temp;
					}
				}
			}
			break;
		case 4:
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (studen[j].phy < studen[j + 1].phy || studen[j].phy == studen[j + 1].phy && studen[j].mark > studen[j + 1].mark) {
						temp = studen[j];
						studen[j] = studen[j + 1];
						studen[j + 1] = temp;
					}
				}
			}
			break;
		case 5:
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (studen[j].che < studen[j + 1].che || studen[j].che == studen[j + 1].che && studen[j].mark > studen[j + 1].mark) {
						temp = studen[j];
						studen[j] = studen[j + 1];
						studen[j + 1] = temp;
					}
				}
			}
			break;
		case 6:
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (studen[j].bio < studen[j + 1].bio || studen[j].bio == studen[j + 1].bio && studen[j].mark > studen[j + 1].mark) {
						temp = studen[j];
						studen[j] = studen[j + 1];
						studen[j + 1] = temp;
					}
				}
			}
			break;
		default:
			break;
	}
	for (i = 0; i < n; i++)
		printf("%d\n", studen[i].seq);


	return 0;
}