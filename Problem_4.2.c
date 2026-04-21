#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("fibonacci(0) => %lld\n", fibonacci(0));
    printf("fibonacci(7) => %lld\n", fibonacci(7));
    printf("fibonacci(10) => %lld\n", fibonacci(10));

    return 0;
}
