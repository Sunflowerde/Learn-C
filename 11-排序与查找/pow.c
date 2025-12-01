#include <stdio.h>

double pow_recursive(double x, int n) {
  if (n == 0) {
    return 1;
  }
  double half = pow_recursive(x, n / 2);
  if (n % 2 == 0) {
    return half * half;
  } else {
    return x * half * half;
  }
}

double pow_iterative(double x, int n) {
  // 将 n 按二进制拆分
  double result = 1;
  double cur = x; // 表示二进制位
  while (n > 0) {
    if (n & 1) {
      result *= cur;
    }
    cur *= cur;
    n >>= 1;
  }
  return result;
}

int main() {
  printf("%f\n", pow_recursive(3, 5));
  printf("%f\n", pow_iterative(3, 5));
  return 0;
}
