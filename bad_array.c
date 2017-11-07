#include <stdio.h>
#include <stdlib.h>

int
main(void) {
    int *data = (int *)malloc(100 * sizeof(int));

    printf("Not initialised yet : %d\n", data[10]);

    free(data);
    data = calloc(100, sizeof(int));

    printf("Out of range : %d\n", data[100]);

    free(data);
    printf("Freed data : %d\n", data[10]);

    data = calloc(100, sizeof(int));

    return EXIT_SUCCESS;
}
