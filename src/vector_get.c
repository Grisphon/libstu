#include "../include/vector.h"
#include <stddef.h>

void *vector_get_at(const struct vector *ve, unsigned int pos)
{
    char *new_ve;

    if (pos >= ve->actual_size)
        return NULL;
    new_ve = (char *) ve->array;
    return &new_ve[pos];
}

void *vector_get_front(const struct vector *ve)
{
    char *new_ve;

    new_ve = (char *) ve->array;
    return &new_ve[0];
}

void *vector_get_back(const struct vector *ve)
{
    char *new_ve;

    new_ve = (char *) ve->array;
    return &new_ve[ve->actual_size];
}

unsigned int vector_get_size(const struct vector *ve)
{
    return ve->actual_size;
}

unsigned int vector_get_capacity(const struct vector *ve)
{
    return ve->max_size;
}
