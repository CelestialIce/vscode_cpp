#include <stdio.h>
#include <string.h>

int LineToString( char *line, char s[100][20] ) {
	int i, j, n;

	j = 0;
	n = 0;
	for ( i = 0; i < (int)strlen(line) + 1; i++ ) {
		if ( line[i] != ' ' && line[i] != '\0' ) {
			s[n][j] = line[i];
			j++;
		}

		if ( line[i] == ' ' || line[i] == '\0' ) {
			s[n][j] = '\0';
			n++;
			j = 0;
		}
	}

	return n;
}

int StringEqual( char *s1, char *s2, int x ) {
	int i, n1, n2;
	unsigned char c;

	n1 = strlen(s1);
	n2 = strlen(s2);
	if ( n1 != n2 )
		return 0;

	for ( i = 0; i < n1; i++ ) {
		c = s1[i];
		if ( c >= 'A' && c <= 'Z' ) {
			c = c + x ;
			if ( c > 'Z')
				c = c - 26;
		} else if ( c >= 'a' && c <= 'z' ) {
			c = c + x ;
			if ( c > 'z' )
				c = c - 26;
		}

		if ( c != s2[i] )
			return 0;
	}

	return 1;
}

int main() {
	char s1[100][20];
	char s2[100][20];
	char line1[2000], line2[2000];
	int  n1, n2;
	int  i, j, x;
	int  start, findx;

	while ( gets(line1) != NULL && gets(line2) != NULL ) {
		n1 = LineToString(line1, s1);
		n2 = LineToString(line2, s2);

		findx = 0;
		for ( x = 0; x <= 25; x++) {
			start = 0;
			for ( j = 0; j < n2; j++ ) {
				for ( i = 0; i < n1; i++ ) {
					if ( StringEqual(s1[ i ], s2[ j ], x ) ) {

						if ( start == 0 ) {
							start = 1;
							printf( "+%d ", x );
							printf( "(%d,%d)", j, i );
						} else
							printf( "(%d,%d)", j, i );
					}
				}
			}

			if ( start == 1 ) {
				printf( "\n" );
				findx = 1;
			}
		}

		if ( findx == 0 )
			printf( "No\n" );
	}

	return 0;
}
