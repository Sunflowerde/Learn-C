#include <stdio.h>

#define LEN 8
int a[LEN] = { 5, 2, 0, 1, 6, 0, 9, 3 };

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int partition(int start, int end) {
  int pivot = a[end];
  int i = start - 1, j;
  for (j = start; j <= end - 1; j++) {
    if (a[j] < pivot) {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[end]);
  return i + 1;
}

void quicksort(int start, int end) {
  int mid;
  if (start < end) {
    mid = partition(start, end);
    quicksort(start, mid - 1);
    quicksort(mid + 1, end);
  }
}

int main() {
  quicksort(0, LEN - 1);
  printf("%d %d %d %d %d %d %d %d\n",
      a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
  return 0;
}
