#include <stdio.h>
#include <stdlib.h>
// AUTHOR : KINYUA MIKE MORETI
// DATE : 15)10/2024
// programme to calculate electricity bill using a function
//creating a function
float finalBill(float units);
//using a function(finalbill)
int main() {
    int customerID;
    char customerName[25];
    float unitsConsumed, totalBill;
//getting customer information
    printf("Enter your Customer ID : ");
    scanf("%d", &customerID);
    printf("\nEnter your first name : ");
    scanf("%s", customerName);
    printf("\nEnter the number of units consumed : ");
    scanf("%f", &unitsConsumed);
// the function to calculate the bill
    totalBill = finalBill(unitsConsumed);
// The customer's details
    printf("\nCustomer ID : %d", customerID);
    printf("\nCustomer Name : %s", customerName);
    printf("\nThe number of units consumed : %.2f units", unitsConsumed);
    printf("\nThe total bill is : Ksh %.2f\n", totalBill);

    return 0;
}
// using function to calculate the bill
float finalBill(float units)
 {
    float rate, bill;
// determining the rate to be charged at
    if (units <= 199)
    {
        rate = 1.20;
    }
     else if (units >= 200 && units < 400)
    {
        rate = 1.50;
    }
    else if (units >= 400 && units < 600)
    {
        rate = 1.80;
    }
    else
    {
        rate = 2.00;
    }
// calculating the bill without the surcharge
    bill = units * rate;
// adding surcharge
    if (bill > 400)
    {
        bill += bill * 0.15;
    }

    return bill;
 }
