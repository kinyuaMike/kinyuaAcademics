#include <stdio.h>
#include <stdlib.h>

//Author : KINYUA MIKE MORETI  CT101\G\23624\24
//Date : 29\10\2024
//programme to read number of students and names and marks and store them in a file

struct Student
{
//assigning variables
    char name[50];
    int marks;
};

int main()
{
//n is the number of students
    int n;
    printf("Please enter the number of students to store data for 1: ");
    scanf("%d", &n);
    struct Student students[n];
    FILE *file = fopen("students.txt", "a");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of the student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
//showing if data has been saved
    printf("The data has been saved successfully.\n");
    return 0;
}
