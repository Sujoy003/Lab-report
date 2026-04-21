#include <stdio.h>

int binary_search(int *arr, int left, int right, int target) {
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target < arr[mid])
        return binary_search(arr, left, mid - 1, target);
    else
        return binary_search(arr, mid + 1, right, target);
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {1, 3, 5, 7, 9};
    int arr3[] = {2};

    printf("binary_search({1,3,5,7,9}, 0, 4, 7) => %d\n",
           binary_search(arr1, 0, 4, 7));

    printf("binary_search({1,3,5,7,9}, 0, 4, 4) => %d\n",
           binary_search(arr2, 0, 4, 4));

    printf("binary_search({2}, 0, 0, 2) => %d\n",
           binary_search(arr3, 0, 0, 2));

    return 0;
}
