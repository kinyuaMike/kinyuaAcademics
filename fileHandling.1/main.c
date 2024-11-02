#include <stdio.h>
#include <stdlib.h>

//Author : KINYUA MIKE MORETI
//Date : 29\10\2024
//programme to read names marks and store them in a file

struct Student
{
//assigning variables
    char name[25];
    int marks;
};

int main()
{
//structure storing students data
    struct Student students[5];
    FILE *file = fopen("students.txt", "w");
//file storing the data being inputed
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of the student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of the student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name,students[i].marks);
    }

    fclose(file);
//showing data has been saved
    printf("The data has been saved successfully.\n");
    return 0;
}
