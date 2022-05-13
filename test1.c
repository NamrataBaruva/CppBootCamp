#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i = 1, j = 5; i < j; i++, j--)
        printf("%d %d ", i, j);
    puts("");
    return EXIT_SUCCESS;
}