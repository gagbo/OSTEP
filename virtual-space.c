#include <stdio.h>
#include <stdlib.h>
int
main(void) {
    printf("location of code : %p\n", (void *)main);
    int *x = malloc(1);
    printf("location of heap : %p\n", x);
    printf("location of stack : %p\n", (void *)&x);
    free(x);
    return EXIT_SUCCESS;
}
