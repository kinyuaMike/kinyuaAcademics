
// variables and data types
// preprocessor directive -scanf(),printf()
#include <stdio.h>

int main()
{
//variables for the formular of simple interest
float principal,rate;
int time;

//Ask for the user`s principal
    printf("What is the investment(principal)?\n");
    scanf("%f",&principal);
//Ask for the rate of interest in percentage
    printf("What is the rate of interest(in percentage)?");
    scanf("%f",&rate);
//Ask for the period in years
    printf("What is the time in years");
    scanf("%d",&time);
//calculating the simple interest
    printf("The simple interest for the principal %.2f and rate %.2f for %d years is %.2f ",principal,rate,time,(principal*rate*time)/100 );

 return 0;
}
