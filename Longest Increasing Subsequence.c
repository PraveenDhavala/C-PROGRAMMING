#include <stdio.h>
int main() {
    int n, a[100], dp[100], i, j, ans = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        dp[i] = 1;
        for (j = 0; j < i; j++)
            if (a[j] < a[i] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
        if (dp[i] > ans) ans = dp[i];
    }
    printf("%d\n", ans);
    return 0;
}

