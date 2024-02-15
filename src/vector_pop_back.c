#include <stdlib.h>
#include "../include/vector.h"

void vector_pop_back(struct vector *ve)
{
    char *new_array;

    new_array = (char *)ve->array;
    if (ve->dtor)
        ve->dtor(&new_array[ve->size_elem * (ve->actual_size - 1)]);
    ve->actual_size -= 1;
}
