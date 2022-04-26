#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 16

bool isStartOfLine(size_t bytesRead)
{
    return bytesRead % LINE_LENGTH == 0;
}

bool isEndOfLine(size_t bytesRead)
{
    return bytesRead % LINE_LENGTH == LINE_LENGTH - 1;
}

// char line[] = "00000000  0U UU UU UU UU UU UU UU UU UU UU UU UU UU UU UU";
char line[] = "<tr><td><code>00000000</code></td><td><code>UU UU UU UU UU UU UU UU UU UU UU UU UU UU UU UU</code></td></tr>";

char digits[] = "0123456789abcdef";

char toASCII(int halfbyte)
{
    assert(halfbyte >= 0 && halfbyte <= 15);
    return digits[halfbyte];
}

int main(void)
{
    size_t bytesRead = 0;
    char *ptr;

    char *headtxt = "<?xml version='1.0'?>\n"    // FOR HEAD TEXT
                   "<!DOCTYPE html>\n"
                   "<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n "
                   "<head>\n"
                   "<title>Hex Dump</title>\n"
                   "</head>\n"
                   "<body>\n"
                   "<h1>Hex Dump</h1>\n"
                   "<table border=\"border\">\n"
                   "<thead>\n"
                   "<tr><th scope=\"col\">Offset</th><th scope=\"col\">Data</th></tr>\n"
                   "</thead>\n"
                   "<tbody>\n";
    printf("%s", headtxt);
    for (int c; (c = getchar()) != EOF; bytesRead++)
    {
        if (isStartOfLine(bytesRead))
        {
            ptr = &line[14]; // FOR START SHIFT
            for (int shift = 28; shift >= 0; shift -= 4) // i-=4
            {
                *ptr++ = toASCII((bytesRead >> shift) & 0xF);
            }
            ptr = &line[44]; // FOR MIDDLE SHIFT
        }
        else  // TO REMOVE FIRST SPACE 
        {
            *ptr++ = ' ';
        }

        *ptr++ = toASCII((c & 0xF0) >> 4);
        *ptr++ = toASCII((c & 0x0F) >> 0);

        if (isEndOfLine(bytesRead))
            puts(line);
            
    }
    if (bytesRead % 16 != 0)
    {   
        *ptr++ = '\0';
        printf("%s",line);
        printf("%s", "</code></td></tr>\n");  // FOR EOF, C<16 
        printf("%s","<tr><td><code>"); 
    }
    ptr = line;

    for (int shift = 28; shift >= 0; shift -= 4) // i-=4
    {
        *ptr++ = toASCII((bytesRead >> shift) & 0xF);
    }
    *ptr++ = '\0';
    printf("%s",line);
    printf("%s", "</code></td></tr>\n");  //  FOR LAST LINE

    char *tailtxt = "</tbody>\n"
                    "</body>\n"    //FOR TAIL TEXT
                    "</html>";
    printf("%s", tailtxt);
}