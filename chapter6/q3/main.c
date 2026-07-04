#include <stdio.h>

int main(void) {

    int n, d, a, b, c;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);

    a = n;
    b = d;

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    n = n / a;
    d = d / a;

    printf("In lowest terms: %d/%d\n", n, d);

    return 0;
}