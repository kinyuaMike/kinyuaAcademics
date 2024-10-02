#include <stdio.h>
#include <stdlib.h>
// programme by Kinyua Mike Moreti
// 28/09/2024
// programme to calculate library overdue fine rate
int main() {
// Info about the book
    int bookID,dueDate,returnDate,daysOverdue,newdueDate,newreturnDate,newdaysOverdue;
    float fineAmount = 0,fineRate = 0,newfineAmount = 0,newfineRate = 0;

// Asking for for the details about the book
    printf("Enter the book's ID :\t");
    scanf("%d", &bookID);
    printf("If it's already a new month,enter the return date and the due date as zero.Else use the exact dates\n");
    printf("\tEnter the return date: (Just the day,no month)\t");
    scanf("%d", &returnDate);
    printf("\tEnter the due date: (Just the day,no month)\t");
    scanf("%d", &dueDate);

// Checking if the book is overdue
    if (returnDate > dueDate)
{
// Calculating the overdue if the book is late
                daysOverdue = returnDate - dueDate;
// calculating the fine to be charged
        if (daysOverdue <= 7)
            {
            fineRate = 20;
            }
        else if (daysOverdue <= 14)
            {
            fineRate = 50;
            }
        else
            {
            fineRate = 100;
            }
// calculating the days overdue
        printf("The book has an overdue of %d.\n",daysOverdue);

// Calculating the amount to be charged
        fineAmount = daysOverdue * fineRate;

// the results about the book
        printf("\nBookID : %d \n",bookID);
        printf("Due date : %d",dueDate);
        printf("\nReturn date : %d",returnDate);
        printf("\nDays overdue : %d",daysOverdue);
        printf("\nFine Rate: Ksh %.3f per day", fineRate);
        printf("\nThe total charges shall be : Ksh %.3f", fineAmount);
    }
// when the month has changed and the overdue might be negative
    else if (returnDate == 0)
    {
// entering the details into new variables
    printf("\n\n\tEnter the return date in the new month(Just the day,no month) :\t");
    scanf("%d", &newreturnDate);
    printf("\n\tEnter the due date that was in the last month(Just the day,no month) :\t");
    scanf("%d", &newdueDate);
//calculating the days overdue
            newdaysOverdue = (newreturnDate + 31) - newdueDate;
// checking fine rate to be used according to the days ovrdue
        if (newdaysOverdue <= 7)
            {
            newfineRate = 20;
            }
        else if (newdaysOverdue <= 14)
            {
            newfineRate = 50;
            }
        else
            {
            newfineRate = 100;
            }
//calculating the fine
            newfineAmount = newdaysOverdue * newfineRate;
        printf("\nBookID : %d \n",bookID);
        printf("Due date : %d",newdueDate);
        printf("\nReturn date : %d",newreturnDate);
        printf("\nDays overdue : %d",newdaysOverdue);
        printf("\nFine Rate: Ksh %.3f per day",newfineRate);
        printf("\nThe total charges shall be : Ksh %.3f",newfineAmount);
    }
    else
// when the book is not overdue
        {
        printf("\n\nThe book is not overdue.\n");
        }

    return 0;
}
