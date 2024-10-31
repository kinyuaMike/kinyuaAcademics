#include <stdio.h>
#include <stdlib.h>

//Author : KINYUA MKE MORETI  CT101\G\23624\24
//Date : 29\10\2024
//programme to write members of an array to a file

struct Student
{
//assigning variables
    char name[25];
    int marks;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    FILE *file = fopen("students.bin", "wb");
    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to binary file successfully.\n");

    struct Student read_students[n];
    file = fopen("students.bin", "rb");
    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    fread(read_students, sizeof(struct Student), n, file);
    fclose(file);

    printf("\nReading data : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Marks: %d\n", read_students[i].name, read_students[i].marks);
    }

    return 0;
}
