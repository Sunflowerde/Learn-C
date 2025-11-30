#include <stdio.h>

int a[1000010], b[100010];

int search(int len, int num) {
    int left = 0, right = len - 1;
    int mid;
    int result = -1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (a[mid] > num) {
            right = mid - 1;
        } else if (a[mid] < num) {
            left = mid + 1;
        } else if (a[mid] == num) {
            result = mid;
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < m; i++) {
        int ans = search(n, b[i]);
        if (ans == -1) {
            printf("-1 ");
        } else {
            printf("%d ", ans + 1);
        }
    }
    return 0;
}