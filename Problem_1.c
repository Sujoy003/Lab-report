#include <stdio.h>

int find_median(int *arr, int size) {
    for (int i = 0; i <= size / 2; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

    
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    return arr[size / 2];
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

    int arr1[] = {7, 2, 10, 9, 1};
    int size1 = 5;

    printf("Input : arr = ");
    print_array(arr1, size1);
    printf(", size = %d\n", size1);

    printf("Output: %d\n\n", find_median(arr1, size1));


    int arr2[] = {4, 1, 8, 3};
    int size2 = 4;

    printf("Input : arr = ");
    print_array(arr2, size2);
    printf(", size = %d\n", size2);

    printf("Output: %d\n", find_median(arr2, size2));

    return 0;
}
