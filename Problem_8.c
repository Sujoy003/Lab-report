#include <stdio.h>

typedef struct {
    int weight;
    int value;
} Item;

void sort(Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double r1 = (double)items[i].value / items[i].weight;
            double r2 = (double)items[j].value / items[j].weight;
            if (r1 < r2) {
                Item t = items[i];
                items[i] = items[j];
                items[j] = t;
            }
        }
    }
}

double fractional_knapsack(Item items[], int n, int capacity) {
    sort(items, n);
    double total = 0.0;

    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            total += items[i].value;
            capacity -= items[i].weight;
        } else {
            total += (double)items[i].value * capacity / items[i].weight;
            break;
        }
    }

    return total;
}

int main() {
    Item items1[] = {{10,60}, {20,100}, {30,120}};
    int n1 = 3, W1 = 50;

    double result1 = fractional_knapsack(items1, n1, W1);
    printf("Output: %.2lf\n", result1);

    Item items2[] = {{5,50}, {10,60}, {15,90}};
    int n2 = 3, W2 = 20;

    double result2 = fractional_knapsack(items2, n2, W2);
    printf("Output: %.2lf\n", result2);

    return 0;
}
