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
        perror("Error opening file for writing");
        return;
    }

    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("Sentence written to %s successfully.\n", FILE_NAME);
}

void readContent()
{
    char sentence[MAX_LENGTH];
    FILE *file = fopen(FILE_NAME, "r");

    if (file == NULL)
    {
        perror("Error opening file for reading");
        return;
    }

    printf("\nContent of %s:\n", FILE_NAME);
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
        perror("Error opening file for appending");
        return;
    }

    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("Sentence appended to %s successfully.\n", FILE_NAME);
}

int main()
{
    writeSentence();

    readContent();

    appendSentence();

    readContent();

    return 0;
}
