#include "../include/stu.h"

void *arrset(void *array, const void *elem,
             unsigned int elem_size, unsigned int n)
{
    unsigned int count;
    char *new_array;

    new_array = (char *) array;
    count = 0;
    while(count < n * elem_size) {
        stu_memcpy(new_array + count, elem, elem_size);
        count += elem_size;
    }
    return array;
}
