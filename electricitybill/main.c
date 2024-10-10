#include <stdio.h>
#include <stdlib.h>
//Author : KINYUA MIKE MORETI
//DATE : 6/10/2024
//programme to calculate and display a customer's electric bill
int main()
{
//creating variables
int customerID;
char customerName[50];
float unitConsumed,charges,totalBill,finalBill,surcharge;
//asking for customer's details and number of units consumed
    printf("Enter your customer's ID : ");
    scanf("%d",&customerID);
    printf("\nEnter your first name : ");
    scanf("%s",customerName);
    printf("\nEnter the number of units consumed : ");
    scanf("%f",&unitConsumed);
//calculating the charges and surcharge of the user according to the number of units consumed
    if (unitConsumed<=199)
    {
        charges=1.20;
        surcharge=1;
    }
    else if (unitConsumed>199 && unitConsumed<400)
    {
        charges=1.50;
        surcharge=1;
    }
    else if (unitConsumed>=400 && unitConsumed<600)
    {
        charges=1.80;
        surcharge=1.15;
    }
    else
    {
        charges=2.00;
        surcharge=1.15;
    }
//calculating the bill and adding the surcharge
        totalBill=unitConsumed*charges;
        finalBill=totalBill*surcharge;
//displaying the user's details and their electricity bill
    printf("\n\tCustomer's ID : %d",customerID);
    printf("\n\tCustomer's name : %s",customerName);
    printf("\n\tUnits comsumed : %.2f units",unitConsumed);
    printf("\n\tCharges per unit : Ksh %.3f",charges);
    printf("\n\tSurcharge to be added : %.0f%%\n",(surcharge*100)-100);
    printf("\n\t\tTOTAL AMOUNT TO BE PAID : Ksh %.3f\n",finalBill);
    return 0;
}
