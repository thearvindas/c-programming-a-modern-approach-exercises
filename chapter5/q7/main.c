#include <stdio.h>

int main(void) {

    int num1, num2, num3, num4;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int largest = num1;
    int smallest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    else if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    else if (num3 < smallest) {
        smallest = num3;
    }

    if (num4 > largest) {
        largest = num4;
    }
    
    else if (num4 < smallest) {
        smallest = num4;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}