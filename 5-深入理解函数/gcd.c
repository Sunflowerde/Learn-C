#include <stdio.h>
#include <math.h>

// 这里 a，b 是正整数
// 注意 gcd(a, b) 返回 a，b 绝对值的 gcd
int gcd(int a, int b) {
    a = fabs(a);
    b = fabs(b);
    // base case
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}