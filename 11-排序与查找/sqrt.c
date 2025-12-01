#include <stdio.h>
#include <math.h>

double sqrt(double x) {
  double left = 0, right = x;
  double mid;
  double result;
  while (left <= right) {
    mid = (left + right) / 2;
    result = mid * mid;
    if (fabs(result - x) < 0.01) {
      break;
    }
    if (result < x) {
      left = mid + 0.01;
    } else if (result > x) {
      right = mid - 0.01;
    } else if (result == x) {
      return result;
    }
  }
  return result;
}

int main() {
  printf("%f\n", sqrt(2));
  return 0;
}
