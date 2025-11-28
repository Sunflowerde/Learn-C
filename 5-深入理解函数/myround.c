#include <stdio.h>
#include <math.h>

// 对 x 进行四舍五入
double myround(double x) {
    // ceil 向上取整，floor 向下取整
    // 先获取小数部分，然后处理相关舍入
    double round_x = 0;
    double pos_x = fabs(x);
    double tail = pos_x - floor(pos_x);
    if (tail >= 0.5) {
        if (x >= 0) {
            round_x = ceil(x);
        } else {
            round_x = floor(x);
        }
    } else {
        if (x >= 0) {
            round_x = floor(x);
        } else {
            round_x = ceil(x);
        }
    }
    return round_x;
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf\n", myround(x));
    return 0;
}