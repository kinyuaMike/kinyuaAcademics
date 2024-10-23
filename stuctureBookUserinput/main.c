# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// Author : KINYUA MIKE MORETI   CT101\G\23624\24
// programme to create a structure and ask for user input
// Date : 21\10\2024
// defining structure
struct book
{
// assigning variables
    char title[30];
    char author[30];
    int publicationyear;
    char isbn[13];
    float price;
};

int main()
{
    struct book user1;
// asking user for input
    printf("Enter the book's title : ");
    scanf(" %[^\n]",user1.title);
    printf("Enter author's name : ");
    scanf(" %[^\n]",user1.author);
    printf("Enter the publication year : ");
    scanf("%d",&user1.publicationyear);
    printf("Enter the ISBN of the book : ");
    scanf("%s",user1.isbn);
    printf("Enter the price of the book : ");
    scanf("%f",&user1.price);

// printing user input
    printf("\nUser1 book details are :\n");
    printf("\tTitle: %s\n", user1.title);
    printf("\tAuthor: %s\n", user1.author);
    printf("\tPublication Year: %d\n", user1.publicationyear);
    printf("\tISBN: %s\n", user1.isbn);
    printf("\tPrice: KSH %.2f\n\n",user1.price);

    return 0;
}
