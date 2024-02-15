#include <stdlib.h>
#include "../include/stu.h"
#include "../include/vector.h"
#include <stddef.h>

static void *remalloc(struct vector *ve)
{
    void *new_ve;

    ve->max_size = ve->max_size + 1;
    new_ve = malloc(ve->size_elem * ve->max_size);
    stu_memcpy(new_ve, ve->array, ve->size_elem * ve->actual_size);
    free(ve->array);
    ve->array = new_ve;
    return new_ve;
}

void *vector_insert_at(struct vector *ve, void *elem, unsigned int pos)
{
    char *new_arr;

    if (pos > ve->max_size)
        return NULL;
    if (ve->actual_size == ve->max_size)
          remalloc(ve);
    new_arr = (char *) ve->array;
    stu_memmove(&new_arr[(pos + 1) * ve->size_elem],
                &new_arr[pos * ve->size_elem],
                (ve->actual_size - pos) * ve->size_elem);
    stu_memcpy(&new_arr[pos * ve->size_elem], elem, ve->size_elem);
    ve->actual_size = ve->actual_size + 1;
    return &new_arr[pos * ve->size_elem];
}
