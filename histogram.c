#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

int histogram[256];

int main(void)
{
    for (int c; (c = getchar()) != EOF;)
    {
        assert(c >= 0 && c < 256);
        histogram[c]++;
    }

    for (int i = 0; i < 256; i++)
    {
        printf("%02x: %d\n", i, histogram[i]);
    }

    return EXIT_SUCCESS;
}