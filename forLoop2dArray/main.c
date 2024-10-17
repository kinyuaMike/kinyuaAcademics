#include <stdio.h>
#include <stdlib.h>
//AUTHOR : KINYUA MIKE MORETI   CT101/G/23624/24
//DATE : 14/10/2024
//programm to create a 2d array using for loop
int main()
{
//assigning variabe values
int arr[3][3] = {{2, 4, 6}, {4, 8, 12}, {8, 16, 24}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The element at [%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}
