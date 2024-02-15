#include <stdlib.h>
#include "../include/vector.h"

void vector_delete(struct vector *ve)
{
    unsigned int count;
    char *new_arr;

    new_arr = (char *) ve->array;
    count = 0;
    if (ve->dtor)
        while (count < ve->actual_size) {
            ve->dtor(&new_arr[ve->size_elem * count]);
            count += 1;
        }
    free(ve->array);
    free(ve);
}
