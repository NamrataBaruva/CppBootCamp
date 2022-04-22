#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    double n1 = 0.1;
    double n2 = 0.2;
    double n3 = n1 + n2;
    printf("%20f\n", n3);
    printf("%g\n", n3);
    printf("%e\n", n3);
    printf("%a\n", n3);
     return EXIT_SUCCESS;
}