#include <stdio.h>
#include <stdlib.h>
int main()
{

    int rows, columns;

    int array[10];

    printf("Enter the number of rows: ");

    scanf("%d ", rows);

    array[0] = 1;

    for (int i = 1; i < rows; i++)
    {

        array[i] = array[i - 1] + 2;
    }

    for (int j = 0; j < rows; j++)
    {

        for (int k = 1; k < array[j]; k++)
        {
            puts("*");
        }
    }

    return EXIT_SUCCESS;
}