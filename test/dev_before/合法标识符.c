#include <stdio.h>
#include <string.h>

int main() {
	int fun(char ch[], int len);
	int t;
	scanf("%d", &t);
	getchar();
	for (int i = 0; i < t; i++) {
		char ch[50];
		gets(ch);
		int flag, len; //flag用来标记是否合法 1合法 0不合法
		len = strlen(ch);
		flag = fun(ch, len);
		if (flag == 1)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}

int fun(char ch[], int len) {
	int i;
	int flag = 0; //flag用来标记是否合法 1合法 0不合法 初始设为0不合法
	// 判断第一个字符 如果第一个字符不属于'_'or'a'~'z'or'A'~'Z'则不判断 直接到最后一步 输出flag=0;
	if ((ch[0] == '_') || (ch[0] >= 'a' && ch[0] <= 'z') || (ch[0] >= 'A' && ch[0] <= 'Z')) {
		/*  至于为什么还需判断第一个字符？
		是以防止输入的为单字符 例如A 程序会带着flag=0直接跳到最后 会输出错误结果
		*/
		for (i = 0; i < len; i++) { //遍历字符
			if ((ch[i] == '_') || (ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= '0'
			        && ch[i] <= '9'))
				flag = 1;
			else {
				flag = 0;
				break; //如果有一个字符不属于合法字符则flag=0, 并跳出遍历
			}
		}
	}
	return flag; // 保证程序只有一个出口
}

