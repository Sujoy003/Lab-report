#include <stdio.h>

int swapCount = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    swapCount++;
}

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quick_sort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void printArray(int *arr, int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("}");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input : ");
    printArray(arr, n);
    printf("\n");

    int pivot = arr[n - 1];
    printf("Pivot (last) = %d\n", pivot);

    int pi = partition(arr, 0, n - 1);

    printf("After partition: ");
    printArray(arr, n);
    printf(" (%d is now at correct index %d)\n", arr[pi], pi);

    printf("Recurse on {");
    for (int i = 0; i < pi; i++) {
        printf("%d", arr[i]);
        if (i != pi - 1) printf(", ");
    }
    printf("} and {");
    for (int i = pi + 1; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("}\n");

    quick_sort(arr, 0, n - 1);

    printf("Final Output : ");
    printArray(arr, n);
    printf("\n");

    return 0;
}
