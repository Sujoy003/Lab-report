
#include <stdio.h>

int array_sum(int *arr, int size) {
    // base case
    if (size == 0) return 0;

    // recursive step: last element + sum of rest
    return arr[size - 1] + array_sum(arr, size - 1);
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {-3, 7, 0};
    int arr3[] = {42};

    printf("array_sum({1,2,3,4,5}, 5) => %d\n", array_sum(arr1, 5));
    printf("array_sum({-3, 7, 0}, 3) => %d\n", array_sum(arr2, 3));
    printf("array_sum({42}, 1) => %d\n", array_sum(arr3, 1));

    return 0;
}
