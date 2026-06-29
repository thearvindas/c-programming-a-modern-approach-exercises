#include <stdio.h>

int main(void) {

    float radius;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    printf("%f\n", 4.0f/3.0f * 3.14 * radius * radius * radius);

    return 0;
}