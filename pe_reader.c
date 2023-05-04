#include <stdio.h>

int main(int argc, char **args) {
  // printf("argc : %d\n", argc);
  // 모든 포인터는 배열과 같다.
  char *a = "hello";
  // a[0] == *(a + 0);
  // a[1] == *(a + 1);
  char *b = "world";
  char *c = "test";
  printf("%c %c\n", a[0], a[1]);
  printf("%c %c\n", *(a + 100), *(a + 1));
  // $ ./out2 1test 2test 3test 4test
  
  printf("%s\n", args[0]);
  return 0;
}