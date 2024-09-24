
// variables and data types
// preprocessor directive -scanf(),printf()
#include <stdio.h>

int main()
{
    //declaration and initialization
   char a ;//c
   char name;//%s
   int age;//%d
   float salary ;//%f
   double budget;//%f
//Ask for character
    printf("Enter the character\n ");
    scanf("%c",&a);
//Ask for name
    printf("What is your name?\n");
    scanf("%s",&name);
//Ask for age
    printf("How old are you?\n");
    scanf("%d",&age);
//Ask for salary
    printf("How much do you earn?\n");
    scanf("%f",&salary);
//Ask the budget
    printf("What is your budget for today?\n");
    scanf("%f",&budget);
//print a comment
    printf("With a salary of %.2f you should be okay to spend %.2f in a day.\n",salary,budget);

    return 0;

}
