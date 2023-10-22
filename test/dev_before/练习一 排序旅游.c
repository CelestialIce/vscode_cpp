#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date {
	int y;
	int m;
	int d;
};

struct Log {
	struct Date date;
	char city[30];
};

int sort(struct Log r[]) { //�����ײ���1 ��
	int N, i, j, changed = 1;
	struct Log temp;
	scanf("%d", &N); //�������ݣ�2 ��
	for (i = 0; i < N; i++)
		scanf("%d %d %d %s", &(r[i].date.y), &(r[i].date.m),
		      &(r[i].date.d), r[i].city);
	for (i = 0; i < N - 1 && changed; i++) { //�����㷨��2 ��
		changed = 0;
		for (j = 0; j < N - 2 - i; j++) {
			if (r[j].date.y > r[j + 1].date.y
			        || r[j].date.y == r[j + 1].date.y && r[j].date.m > r[j + 1].date.m
			        || r[j].date.y == r[j + 1].date.y && r[j].date.m == r[j + 1].date.m
			        && r[j].date.d > r[j + 1].date.d) { //��������Ƚϣ�1 ��
				temp = r[j];
				r[j] = r[j + 1];
				r[j + 1] = temp;
				changed = 1;
			}
		}
	}
	return N;
}

int print(struct Log r[], int N) { //�����ײ���1 ��
	char citylist[1000][21];
	int i, j, count = 0;
	for (i = 0; i < N; i++) { //���أ�2 ��
		for (j = 0; j < count; j++)
			if (strcmp(r[i].city, citylist[j]) == 0)
				break;
		if (j == count)

			strcpy(citylist[count++], r[i].city);
	}
	for (j = 0; j < count; j++) //�����1 ��
		printf("%s\n", citylist[j]);
	return count;
}

int main() { //��������2 ��
	struct Log route[1000];
	int N;
	N = sort(route);
	print(route, N); //���ߺϲ�д�ɣ�print(route, sort(rount));
	return 0;
}