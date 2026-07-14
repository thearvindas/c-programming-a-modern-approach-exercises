#include <stdio.h>

int main(void){

    int a[5][5];
    int row_total[5] = {0};
    int col_total[5] = {0};
    int i, j;

    for (i = 0; i < 5; i++) {
            printf("Enter row %d: ", i + 1);
            for (j = 0; j < 5; j++) {
                scanf("%d", &a[i][j]);
            }
    }

    printf("Row totals: ");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            row_total[i] = row_total[i] + a[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", row_total[i]);
    }

    printf("\nColumn totals: ");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            col_total[i] = col_total[i] + a[j][i];
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", col_total[i]);
    }
    
    printf("\n");

    return 0;
}