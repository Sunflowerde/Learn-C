#include <stdio.h>

#define LEN 8
int a[LEN] = { 1, 9, 3, 2, 0, -4, 10, 3 };

int find() {
  int min_num = 10000000;
  for (int i = 0; i < LEN; i++) {
    if (a[i] < min_num) {
      min_num = a[i];
    }
  }
  return min_num;
}

int main() {
  printf("%d\n", find());
  return 0;
}
