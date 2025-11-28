#define LEN 5
int a[LEN] = { 10, 5, 2, 4, 7 };

void insert_sort() {
    int i, j, key;
    for (i = 1; i < LEN; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        // 此时 j + 1 还是空的
        a[j + 1] = key;
    }
}