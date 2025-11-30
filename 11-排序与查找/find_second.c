#include <stdio.h>
#include <limits.h>

#define LEN 8
int a[LEN] = { 0, 2, 9, 8, 7, 2, 8, 3 };

int find_second() {
  int first = INT_MAX;
  int second = INT_MAX;

  for (int i = 0; i < LEN; i++) {
    if (a[i] < first) {
      second = first;
      first = a[i];
    } else if (a[i] > first && a[i] < second) {
      second = a[i];
    }
  }
  return second;
}

int main() {
  printf("%d\n", find_second());
  return 0;
}
