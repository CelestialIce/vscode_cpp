//同样还是抄的
#include <stdio.h>
#include <string.h>		//如果用到字符串处理函数的话，1分

int main() {
	char s[101]; //数组至少要有101个单元
	char Ops[10][10], t[10];		//变量定义及初始化，2分
	int i = 0, n = 0, j = 0;

	fgets(s, 101, stdin);   //读取表达式，1分
	while (s[i]) {	//循环，1分
		while (s[i] >= '0' && s[i] <= '9' || s[i] == '.')
			t[j++] = s[i++];          //识别一个操作数，3分
		if (j) {
			t[j] = '\0'; //在串尾放上结束标志，1分
			strcpy(Ops[n++], t);    //存储到Ops中，2分
			//在此做输出也可
			j = 0;
		}
		if (s[i])
			i++;    //跳过非操作数，1分
	}
	for (i = 0; i < n; i++) { //输出，2分
		printf("%s\n", Ops[i]);
	}
	return 0;
}
