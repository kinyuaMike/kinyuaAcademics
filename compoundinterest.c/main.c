
// variables and data types
// preprocessor directive -scanf(),printf()
#include <stdio.h>

int main()
{
//variables for the formular of compound interest
float principal,rate;
int time,frequency;

//Ask for the user`s principal
    printf("What is the investment(principal)?\n");
    scanf("%f",&principal);
//Ask for the rate of interest in percentage
    printf("What is the rate of interest(in percentage)?\n");
    scanf("%f",&rate);
//Ask for the period in years
    printf("What is the time in years\n");
    scanf("%d",&time);
//Ask for the number of times compounded in per year
    printf("what is the frequency?\n");
    scanf("%d",&frequency);
//calculating the compound interest
printf("The compound interest for the principal %.2f,rate %.2f,frequency %d for %d years is %.2f ",principal,rate,frequency,time,principal*(1+rate/frequency));

 return 0;
}
