#include <stdio.h>
int main() {
    int n, k, i, a[100], res[100];
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    k = k % n;
    for (i = 0; i < n; i++) res[i] = a[(i + k) % n];
    for (i = 0; i < n; i++) printf("%d ", res[i]);
    return 0;
}

