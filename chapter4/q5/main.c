#include <stdio.h>

int main(void) {

    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

    d12 = (10 - (((d1 + d3 + d5 + d7 + d9 + d11) * 3 + (d2 + d4 + d6 + d8 + d10)) % 10)) % 10;

    printf("Check digit: %d\n", d12);

    return 0;
}