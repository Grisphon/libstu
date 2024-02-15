#include <stdlib.h>
#include "../include/vector.h"
#include "../include/stu.h"

struct vector *vector_create(unsigned int elem_size,
			     unsigned int initial_capacity)
{
    struct vector *new_vector;

    new_vector = malloc(sizeof(struct vector));
    new_vector->actual_size = 0;
    new_vector->max_size = initial_capacity;
    new_vector->array = malloc(elem_size * initial_capacity);
    new_vector->size_elem = elem_size;
    new_vector->dtor = NULL;
    return new_vector;
}
