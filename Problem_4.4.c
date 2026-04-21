#include <stdio.h>

double power(double base, int exp) {
    double result = 1.0;

    for (int i = 0; i < exp; i++) {
        result = result * base;
    }

    return result;
}

int main() {
    printf("power(2.0, 0) => %.1f\n", power(2.0, 0));
    printf("power(3.0, 4) => %.1f\n", power(3.0, 4));
    printf("power(2.5, 3) => %.3f\n", power(2.5, 3));

    return 0;
}
