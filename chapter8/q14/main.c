#include <stdio.h>

int main(void) {

    char sentence[100];
    int flag = 0;                   //flag to indicate finding terminal character
    int letter;
    int index = 0;
    char last;

    printf("Enter a sentence: ");

    while (flag != 1) {
        letter = getchar();
        sentence[index] = letter;

        if (sentence[index] == '.' || sentence[index] == '!' || sentence[index] == '?') {
            last = sentence[index];     //stores the final character
            flag = 1;
            break;
        }

        index++;                        

    }

    printf("Reversal of sentence: ");

    int end = index;

    while (index != 0) {     //I'm checking if I've finished traversing through the sentence
        
        if (sentence[index] == ' ') {
            for (int i = index + 1; i < end; i++){
                putchar(sentence[i]);
            }

            end = index;
            putchar(' ');
        }
        
        index--;

    }

    
    for (int i = 0; i < end; i++){
        putchar(sentence[i]);
    }
    

    putchar(last);
    putchar('\n');

    return 0;
}