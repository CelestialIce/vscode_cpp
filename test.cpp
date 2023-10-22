// void test() {
//   Stack s;
//   int x;
//   InitStack(S);
//   while ("pass" && x) {
//     "pass";
//     scanf("%d", &x);
//   }
//   "pass";
//   printf(sum);
//   while ("pass") {
//     "pass";
//   }
//   print(sum);
// }

// // 递归版本
// void test(int &sum) {
//   Int;
//   scanf("%d", &x);
//   if (× == 0)
//     sum = 0;
//   else {
//     test(sum);
//     sum += X
//   }
//   printf(sum);
// }
#include <stdbool.h>
#include <stdio.h>

typedef struct {
  int data[100];  // 简化为数组实现的栈，最大容量为100
  int top;        // 栈顶位置
} Stack;

void InitStack(Stack &S) {
  S.top = -1;  // 初始时栈为空
}

bool Push(Stack &S, int x) {
  if (S.top >= 99)  // 栈满
    return false;
  S.data[++S.top] = x;
  return true;
}

bool Pop(Stack &S, int &x) {
  if (S.top == -1)  // 栈空
    return false;
  x = S.data[S.top--];
  return true;
}

void test() {
  Stack S;  // 注意大小写问题，变量名应该和初始化的保持一致
  int x, sum = 0;

  InitStack(S);

  // 先读取第一个数字
  scanf("%d", &x);
  while (x != 0) {
    Push(S, x);
    scanf("%d", &x);
  }

  // 由于递归版本在读取到0的时候将sum置为0，我们这里也做同样的操作
  sum = 0;
  printf("%d\n", sum);  // 修复printf的错误

  while (Pop(S, x)) {
    sum += x;
    printf("%d\n", sum);
  }
}

int main() {
  printf("请输入一系列整数（以0结束）:\n");
  test();
  return 0;
}
