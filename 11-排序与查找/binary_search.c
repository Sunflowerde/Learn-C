#include <stdio.h>

#define LEN 8
int a[LEN] = { 1, 2, 2, 2, 5, 6, 8, 9 };

int binary_search(int number) {
  int left = 0, right = LEN - 1;
  int mid;
  while (left <= right) {
    mid = (left + right) / 2;
    if (a[mid] < number) {
      left = mid + 1;
    } else if (a[mid] > number) {
      right = mid - 1;
    } else if (a[mid] == number) {
      return mid;
    }
  }
  return -1;
}

int main() {
  printf("%d\n", binary_search(2));
  return 0;
}
