# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// Author : Kinyua Mike Moreti  CT101\G\23624\24
// programme to define a structure 'book'
// Date : 21\10\2024

// creating the structure
struct book
{
// creating variablesp
    char title[30];
    char author[30];
    int publicationyear;
    char isbn[13];
    float price;
};

int main()
{
// initializing the book details
    struct book book1details = {"Introduction to C Programming", "John Smith", 2022, "9780131103627", 49.99};

// printing the book details
    printf("\tBook title : %s\n", book1details.title);
    printf("\tAuthor : %s\n", book1details.author);
    printf("\tYear of publication : %d\n", book1details.publicationyear);
    printf("\tISBN : %s\n", book1details.isbn);
    printf("\tPrice : %.2f\n", book1details.price);

    return 0;
}

