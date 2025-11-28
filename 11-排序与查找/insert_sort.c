#include <stdio.h>

#define LEN 5
int a[LEN] = { 10, 5, 2, 4, 7 };

void insert_sort() {
    int i, j, key; // key 表示当前需要排序的元素
    // 我们默认第一个元素是已经排好序的，从第二个元素开始
    for (int i = 1; i < LEN; i++) {
        key = a[i];
        // 与该元素之前的所有元素进行比较
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            // 从后向前遍历，找到的第一个大于 key 的元素就是最大的，此时需要把当前元素向后移动，同时插入 key
            a[j + 1] = a[j];
            // 这里有一个优化，我们只需要一直向前遍历，找到一个最小的 j，使得 a[j] <= key 同时 a[j + 1] > key，此时插入 key 即可
            j--; // 继续向前遍历，如果后面的元素比他小就说明插入正确，退出循环；否则插入错误，重复上述过程
        }
        a[j + 1] = key;
    }
}

int main() {
    insert_sort();
    printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
    return 0;
}