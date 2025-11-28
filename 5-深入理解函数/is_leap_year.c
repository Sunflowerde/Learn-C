int is_leap_year(int year) {
    // 特判 %400 的情形
    if (year % 400 == 0) {
        return 1;
    }
    if (year % 4 == 0 && year % 100 != 0) {
        return 1;
    }
    return 0;
}