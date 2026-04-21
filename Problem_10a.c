#include <stdio.h>

int knapsack_01(int weights[], int values[], int n, int W) {
    int dp[100][100];

    for(int i=0;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(i==0 || w==0)
                dp[i][w]=0;
            else if(weights[i-1] <= w){
                int take = values[i-1] + dp[i-1][w-weights[i-1]];
                int notTake = dp[i-1][w];
                dp[i][w] = (take > notTake) ? take : notTake;
            }
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    return dp[n][W];
}

int main() {
    int weights1[] = {2,3,4,5};
    int values1[] = {3,4,5,6};
    int n1 = 4, W1 = 5;

    printf("%d\n", knapsack_01(weights1, values1, n1, W1));

    int weights2[] = {1,3,4,5};
    int values2[] = {1,4,5,7};
    int n2 = 4, W2 = 7;

    printf("%d\n", knapsack_01(weights2, values2, n2, W2));

    return 0;
}
