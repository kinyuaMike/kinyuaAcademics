#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "data.txt"
#define MAX_LENGTH 100

//Author : KINYUA  MIKE MORETI  CT101\G\23624\24
//Date : 29\10\2024
//programme to manage simple text file operations

void writeSentence()
{
    char sentence[MAX_LENGTH];
    FILE *file = fopen(FILE_NAME, "w");

    if (file == NULL)
    {
        perror("Could not open file.");
        return;
    }

    printf("Enter a sentence of up to 100 characters : ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("The sentence has been written to file %s successfully.\n", FILE_NAME);
}

void readContent()
{
    char sentence[MAX_LENGTH];
    FILE *file = fopen(FILE_NAME, "r");

    if (file == NULL)
    {
        perror("Could not open file.");
        return;
    }

    printf("\nContents of %s:\n", FILE_NAME);
    while (fgets(sentence, MAX_LENGTH, file) != NULL)
    {
        printf("%s", sentence);
    }
    fclose(file);
}

void appendSentence()
{
    char sentence[MAX_LENGTH];
    FILE *file = fopen(FILE_NAME, "a");

    if (file == NULL)
    {
        perror("Could not open file.");
        return;
    }

    printf("Enter another sentence of up to 100 characters to attach : ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("The sentence has been attached to %s successfully.\n", FILE_NAME);
}

int main()
{
    writeSentence();

    readContent();

    appendSentence();

    readContent();

    return 0;
}
