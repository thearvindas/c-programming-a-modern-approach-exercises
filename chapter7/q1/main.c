#include <stdio.h>

int main(void) {

    int n;
    printf("Enter number of entries: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%20d%20d\n", i, i * i);
    }

    return 0;
}