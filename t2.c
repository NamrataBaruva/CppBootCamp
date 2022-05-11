#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch;

    printf("Enter the character to get the ASCII value: ");
    scanf("%c", &ch);
    signed int i = ch;
    printf("%02x", i);
    return 0;
}