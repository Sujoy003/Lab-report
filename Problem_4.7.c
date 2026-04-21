#include <stdio.h>

int array_max(int *arr, int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr1[] = {3, 1, 9, 2, 7};
    int arr2[] = {-5, -1, -8};
    int arr3[] = {42};

    printf("array_max({3, 1, 9, 2, 7}, 5) => %d\n", array_max(arr1, 5));
    printf("array_max({-5, -1, -8}, 3) => %d\n", array_max(arr2, 3));
    printf("array_max({42}, 1) => %d\n", array_max(arr3, 1));

    return 0;
}
