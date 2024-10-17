#include <stdio.h>
#include <stdlib.h>
//AUTHOR : KINYUA MIKE MORETI     CT101/G/23624/24
//DATE  : 14/10/2024
//programe to create a 3d array using for loop
int main()
 {
 //assigning variables values
int arr[2][2][2] = {{{16, 26}, {36, 46}},{{56, 66}, {76, 86}}};
//for loop to create the 3d array
    for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 2; j++)
         {
            for (int k = 0; k < 2; k++)
            {
                printf("Element at arr[%d][%d][%d]: %d\n", i, j, k, arr[i][j][k]);
            }
         }
     }
    return 0;
}
