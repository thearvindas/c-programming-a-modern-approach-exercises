#include <stdio.h>

int main(void) {

    int num;
    int last_digit;
    int reversed_num = 0;

    printf("Enter a three digit number: ");
    if (scanf("%d", &num) != 1) {
        printf("Not a valid number.\n");

        return 1;
    }

    if (num < 100 || num > 999){
        printf("Not a three digit number.\n");

        return 1;
    }

    while (num != 0){
        last_digit = num % 10;                              //gets the last digit
        num = num / 10;                                     //removes the last digit
        reversed_num = reversed_num * 10 + last_digit;      //last_digit * 10  
    }

    printf("The reversed number is: %03d\n", reversed_num);

    return 0;
}