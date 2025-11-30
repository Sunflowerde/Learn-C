#include <stdio.h>

#define LEN 5000005
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

int quick_select(int start, int end, int k) {
    if (start <= end) {
        int p = partition(start, end);
        if (p == k) {
            return a[p];
        } else if (p > k) {
            return quick_select(start, p - 1, k);
        } else if (p < k) {
            return quick_select(p + 1, end, k);
        }
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", quick_select(0, n - 1, k));
    return 0;
}