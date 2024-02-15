#include <stdlib.h>
#include "../include/vector.h"
#include "../include/stu.h"

void vector_pop_front(struct vector *ve)
{
    char *new_arr;

    new_arr = (char *) ve->array;
    stu_memmove(&new_arr[0], &new_arr[ve->size_elem],
                ve->actual_size * ve->size_elem);
    if (ve->dtor)
        ve->dtor(&new_arr[ve->size_elem * ve->actual_size]);
    ve->actual_size -= 1;
}
