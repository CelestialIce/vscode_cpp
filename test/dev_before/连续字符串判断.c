//这个是抄的
#include <stdio.h>

int main() {
	char s[101];    //字符数组至少要有101个单元
	char ch = 0;    //变量定义及初始化，2分
	int i = 0, n;

	gets(s);    //scanf("%s",s); //正确读取，2分

	do {
		if (ch != s[i]) { //与前一个字符不同，3分
			if (ch)     //输出前一个字符的编码，2分
				printf("%c%d ", ch, n);
			ch = s[i];  //新字符
			n = 1;
		} else          //与前一个字符相同，计数，2分
			n++;
	} while (s[i++]);		//循环，1分

	return 0;
}
