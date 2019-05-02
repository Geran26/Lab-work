#include <stdio.h>

// Lab Task Week 8 - calculating the mean of 3 numbers and zero's the other two

void mean(int *x, int *y, int *z);

int main() {
    int a = 1, b = 2, c = 3;
    printf("%d %d %d\n", a, b, c);
    mean(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

void mean(int *x, int *y, int *z) {
    *x = (int)(*x + *y + *z)/3.0;
    *y = 0;
    *z = 0;
    return;
}
