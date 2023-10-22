#include <stdio.h>
#include <string.h>

int LineToString(char *line, char s[100][20]) {
	int i, j, n;
	j = 0;
	n = 0;
	for (i = 0; i < strlen(line) + 1; i++) {
		if (line[i] != '' && line[i] != '\0') {
			s[n][j] = line[i];
			j++;
		}
		if (line[i] == '' && line[i] == '\0') {
			s[n][j] = '\0';
			n++;
			j = 0;
		}
	}
	return 0;
}

int main() {
	char names[100][20];
	char line[100 * 20];
	char tmp[20];
	int i = 0, j = 0, n = 0;
	while (get(line) != NULL) {
		n = LineToString(line, names);
		for (j = 0; j < n - 1; j++) {

		}

	}


	return 0;
}