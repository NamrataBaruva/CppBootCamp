#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a =65;
int b = 7;
printf("a + b = %df\n", a + b);
printf("a - b = %df\n", a - b);
printf("a * b = %df\n", a * b);

printf("a / b = %df\n", a / b);
printf("a %% b = %df\n", a % b);

printf("a << b = %df\n", a << 0 );
printf("a << b = %df\n", a << 1 );
printf("a << b = %df\n", a << 2 );
printf("a << b = %df\n", a << 3 );

printf("a >> b = %df\n", a >> 0 );
printf("a >> b = %df\n", a >> 1 );
printf("a >> b = %df\n", a >> 2 );
printf("a >> b = %df\n", a >> 3 );

printf("a | b = %df\n", a | b );
printf("a & b = %df\n", a & b );
printf("a ^ b = %df\n", a ^ b );

 return EXIT_SUCCESS;
}