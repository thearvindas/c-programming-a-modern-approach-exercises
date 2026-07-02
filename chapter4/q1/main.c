#include <stdio.h>

int main(void){

    int num, last_digit, reversed_num;
    printf("Enter a two digit number: ");
    scanf("%2d", &num);

    last_digit = num % 10;
    num = num / 10;
    reversed_num = last_digit * 10 + num;

    printf("The reversal is: %d\n", reversed_num);

    return 0;


}