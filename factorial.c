#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int Factorial(int n)
{
        if (n < 0)
                return 0;
        int factorial = 1;
        for (int i = 1; i <= n; i++)
                factorial = factorial * i;
        return factorial;
}
int main(void)
{
        printf("Enter  an Integer");
        int int1;
        scanf("%d", &int1);
        int a1 = Factorial(int1);
        printf("The Factorial is %d\n", a1);
        return EXIT_SUCCESS;
}