#include <stdio.h>
#include <string.h>

int lcs(char *s1, char *s2, int m, int n) {
    int dp[100][100];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=(dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
        }
    }

    return dp[m][n];
}

int main() {
    char s1[] = "ABCBDAB";
    char s2[] = "BDCAB";
    printf("%d\n", lcs(s1, s2, strlen(s1), strlen(s2)));

    char s3[] = "AGGTAB";
    char s4[] = "GXTXAYB";
    printf("%d\n", lcs(s3, s4, strlen(s3), strlen(s4)));
    char s5[] = "ABC";
    char s6[] = "AC";
    printf("%d\n", lcs(s5, s6, strlen(s5), strlen(s6)));
    return 0;
}

