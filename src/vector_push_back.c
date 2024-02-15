#include <stdlib.h>
#include "../include/vector.h"
#include "../include/stu.h"
#include <stdio.h>

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

void *vector_push_back(struct vector *ve, void *elem)
{
    char *new_arr;

    if (ve->actual_size == ve->max_size)
        remalloc(ve);
    new_arr = (char *) ve->array;
    stu_memcpy(&new_arr[ve->actual_size * ve->size_elem], elem, ve->size_elem);
    ve->actual_size = ve->actual_size + 1;
    return &new_arr[ve->actual_size * ve->size_elem];
}

