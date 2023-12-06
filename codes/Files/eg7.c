#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *file;
    int totalLinesCount = 0;
    char currentCharacter;
    file = fopen(argv[1], "r");
    if (file == NULL){
        printf("The file doesn't exist ! Please check again .");
        return 0;
    }
    while ((currentCharacter = fgetc(file)) != EOF){
        if (currentCharacter == '\n')
        {
            totalLinesCount++;
        }
    }
    fclose(file);
    totalLinesCount++;
    printf("Total number of lines are : %d\n", totalLinesCount);
    return 0;
}