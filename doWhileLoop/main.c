#include <stdio.h>
#include <stdlib.h>
//Author : KINYUA MIKE MORETI
//DATE : 6/10/2024
//programme to ask user for input to start and stop in the do while loop
int main()
{
//creating variables
int i,start=0,stop=0,sum=0;
//asking for user input
    printf("Enter the number you wish to start the loop from : ");
    scanf("%d",&start);
    printf("\nEnter the number to stop at : ");
    scanf("%d",&stop);
//giving variable i a value
        i=start;
//the action to take place when the condition is true
    do  {
            printf("\n%d.",i);
            sum+=i;i++;
        }
//the condition
    while (i<=stop);
//printing the sum
    printf("\n\n\tThe sum of the numbers is %d.\n",sum);

    return 0;
}
