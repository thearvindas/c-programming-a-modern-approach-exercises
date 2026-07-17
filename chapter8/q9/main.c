#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));

    int i, j, direction, location_i, location_j;
    char grid[10][10];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            grid[i][j] = '.'; //setting grid to be all periods
        }
    }

    grid[0][0] = 'A'; //setting first character to A
    i = 0;
    j = 0;
    location_i = 0;
    location_j = 0;

    while (grid[i][j] != 'Z') {

        int has_move = 0;                                       //check if any legal move exists
        if (i - 1 >= 0 && grid[i - 1][j] == '.') has_move = 1;  //up
        if (i + 1 <= 9 && grid[i + 1][j] == '.') has_move = 1;  //down
        if (j - 1 >= 0 && grid[i][j - 1] == '.') has_move = 1;  //left
        if (j + 1 <= 9 && grid[i][j + 1] == '.') has_move = 1;  //right

        if (!has_move) {                                        //dead end, stop walking
        break;
                }

        direction = 0 + rand() % (3 - 0 + 1); //generating a random number between 0 and 3
        //printf("Direction is %d\n", direction);

        switch (direction) {
            case (0):   location_i = i - 1;     //go up
                        location_j = j;
                        break;
            case (1):   location_i = i;         //go right
                        location_j = j + 1;
                        break;
            case (2):   location_i = i + 1;     //go down
                        location_j = j;
                        break;
            case (3):   location_i = i;         //go left
                        location_j = j - 1;
                        break;
            default:    break;
        }

        //printf("Location i %d\n", location_i);
        //printf("Location j %d\n", location_j);
        
        if (location_i < 0 || location_i > 9) {     //if you're going outside, come back
            location_i = i;
            location_j = j;
            //printf("Going out i\n");
            continue;
        }

        if (location_j < 0 || location_j > 9) {     //if you're going outside, come back
            location_j = j;
            location_i = i;
            //printf("Going out j\n");
            continue;
        }

        if (grid[location_i][location_j] != '.'){   //if you already have a letter there, come back
            location_j = j;
            location_i = i;
            //printf("Letter already\n");
            continue;
        }


        grid[location_i][location_j] = grid[i][j] + 1;
        i = location_i;
        j = location_j;
        //printf("%c\n", grid[location_i][location_j]);


    }


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c", grid[i][j]);

            if (j == 9) {
                printf("\n");
            }
        }
    }

    return 0;
}

