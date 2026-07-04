#include <stdio.h>

int main(void) {

    int a, b, c;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    printf("Greatest common divisor: %d\n", a);

    return 0;
}