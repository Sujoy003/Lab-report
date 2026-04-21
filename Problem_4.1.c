#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("factorial(0) => %lld\n", factorial(0));
    printf("factorial(5) => %lld\n", factorial(5));
    printf("factorial(10) => %lld\n", factorial(10));

    return 0;
}
