#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n < 0 || n >= 10) {
        printf("OK\n");
    }
    if (0 <= n && n < 10) {
        printf("NG\n");
    }

    return 0;
}
