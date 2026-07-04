#include <stdio.h>

int main(void) {

    float num;
    float largest = 0;

    do {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num > largest) {
            largest = num;
        }

    } while (num > 0);

    printf("The largest number entered was: %.2f", largest);

    return 0;
}