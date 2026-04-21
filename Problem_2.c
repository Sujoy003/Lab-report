#include <stdio.h>
int find_kth_largest(int *arr, int size, int k) {
    for (int i = 0; i < k; i++) {   // exactly k passes
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[size - k];
}
void print_array(int *arr, int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) printf(", ");
    }
    printf("}");
}
int main() {
    int arr1[] = {3, 1, 7, 4, 9, 2};
    int size1 = 6, k1 = 2;
    printf("Input : arr = ");
    print_array(arr1, size1);
    printf(", size = %d, k = %d\n", size1, k1);
    printf("Output: %d\n\n", find_kth_largest(arr1, size1, k1));
    int arr2[] = {10, 5, 8, 3};
    int size2 = 4, k2 = 4;
    printf("Input : arr = ");
    print_array(arr2, size2);
    printf(", size = %d, k = %d\n", size2, k2);
    printf("Output: %d\n", find_kth_largest(arr2, size2, k2));
    return 0;
}
