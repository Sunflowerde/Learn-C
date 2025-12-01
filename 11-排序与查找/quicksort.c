#include <stdio.h>

#define LEN 100010
int a[LEN];

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

void sort(int start, int end) {
  int mid;
  if (start < end) {
    mid = partition(start, end);
    sort(start, mid - 1);
    sort(mid + 1, end);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(0, n - 1);
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}