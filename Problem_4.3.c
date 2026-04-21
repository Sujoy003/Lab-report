#include <stdio.h>
int count_digits(int n) {
    if (n == 0) return 1;

    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main() {
    printf("count_digits(0) => %d\n", count_digits(0));
    printf("count_digits(9) => %d\n", count_digits(9));
    printf("count_digits(100) => %d\n", count_digits(100));
    printf("count_digits(98765) => %d\n", count_digits(98765));

    return 0;
}
