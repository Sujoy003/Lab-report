#include <stdio.h>
void insert(int *out, int *k, int val) {
    int i = *k - 1;
    while (i >= 0 && out[i] > val) {
        out[i + 1] = out[i];
        i--;
    }
    out[i + 1] = val;
    (*k)++;
}
void merge_sorted(int *a, int n, int *b, int m, int *out) {
    int k = 0;

    for (int i = 0; i < n; i++)
        insert(out, &k, a[i]);

    for (int i = 0; i < m; i++)
        insert(out, &k, b[i]);
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
    int a[] = {5, 1, 9};
    int b[] = {3, 7, 2, 6};
    int n = 3, m = 4;
    int out[100];
    printf("Input : a = ");
    print_array(a, n);
    printf(", n = %d\n", n);
    printf("b = ");
    print_array(b, m);
    printf(", m = %d\n", m);

    merge_sorted(a, n, b, m, out);
    printf("Output: out = ");
    print_array(out, n + m);
    printf("\n");
    return 0;
}
