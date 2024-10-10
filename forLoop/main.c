#include <stdio.h>
#include <stdlib.h>
//Author : KINYUA MIKE MORETI
//DATE : 6/10/2024
//programme to ask user for input to start and stop in the for loop
int main()
{
//creating variables
int i,start,stop=0,sum=0;

    printf("Enter the number to start a loop from : ");
    scanf("%d",&start);
    printf("\nEnter the number to end at : ");
    scanf("%d",&stop);
//giving variable i a value
//the condition
    for ( i=start;i<=stop;i++)
    {
//the action to take place when the condition is true
        sum=sum+i;
        printf("\n%d.",i);
    }
//printing the sum
    printf("\n\n\tThe sum of the numbers numbers is %d.\n",sum);
    return 0;
}
