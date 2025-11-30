#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int partition(int start, int end) {
  int pivot = a[end];
  int i = start - 1;

  for (int j = 0; j <= end - 1; j++) {
    if (a[j] < pivot) {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[end]);
  return i + 1;
}

int quick_sort(int start, int end, int k) {
  int k_index = k - 1;
  if (start <= end) {
    int p_index = partition(start, end);
    if (p_index == k_index) {
      return a[p_index];
    } else if (p_index > k_index) {
      return quick_sort(p_index + 1, end, k);
    } else if (p_index < k_index) {
      return quick_sort(start, p_index - 1, k);
    }
  }
}


