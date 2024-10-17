#include <stdio.h>
#include <stdlib.h>
//AUTHOR : KINYUA MIKE MORETI   CT101/G/23624/24
//DATE : 14/10/2024
//program to create a 1d array
int main()
 {
 //assigning variable values
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 0; i <10; i++)
    {
        printf("The element at %d = %d\n", i, arr[i]);
    }
    return 0;
}
