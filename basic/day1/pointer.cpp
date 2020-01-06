#include <stdio.h>
// 函数没有返回值时应该指定为 void类型
void printMin(int a, int b) {
  if (a<b) {
    printf("%d", a);
  } else {
    printf("%d", b);
  }
}
int main() {
  void (* pf)(int, int);
  int x = 4; int y = 5;
  // 其实也可以这么写 int x = 4, y = 5;
  pf = printMin;
  pf(x,y);
  // 函数结束
  return 0;
}
