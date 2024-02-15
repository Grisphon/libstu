#include <stdlib.h>
#include "../include/vector.h"
#include "../include/stu.h"

void vector_erase_at(struct vector *ve, unsigned int pos)
{
    char *new_arr;

    new_arr = (char *) ve->array;
    if (ve->dtor)
        ve->dtor(&new_arr[ve->size_elem * pos]);
    stu_memmove(&new_arr[pos * ve->size_elem],
                &new_arr[(pos + 1) * ve->size_elem],
                (ve->actual_size - pos) * ve->size_elem);
    ve->actual_size -= 1;
}
