#include <stdio.h>
#include <stdlib.h>

int f() {
    return 1;
}

int main(void) {
    switch (f()) {
    case 1: puts("foo");
    case 2: puts("bar");
    default: puts("bummer");
    return EXIT_SUCCESS;
}
}​​