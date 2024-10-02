#include <stdio.h>
#include <stdlib.h>
//programme to check if user is eligible for bank loan services
int main()
{
//userprompt variables
int userAge,userContact;
char userName,userResidence;
float userIncome;

//ask for user info
    printf("What is your name?\n");
    scanf("%s",&userName);
    printf("How old are you?\n");
    scanf("%d",&userAge);
    printf("Enter your telephone number please\n");
    scanf("%d",&userContact);
    printf("What is your place of residence?\n");
    scanf("%s",&userResidence);
    printf("What is your annual income?\n");
    scanf("%f",&userIncome);

//check if user`s age reaches the required age using if statement
    if(userAge>=21 && userIncome>=21000)
        printf("Congratulations you qualify for a loan.\n");
    else
        printf("Unfortunately,we are unable to offer you a loan at this time.\n");
    return 0;
}
