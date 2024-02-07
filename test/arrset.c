#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(arrset, normal_1) {
    int *array;
    unsigned int i;
    const int default_value = 1970;
    const unsigned int elem_size = sizeof(int);

    array = malloc(elem_size * 89);
    arrset(array, &default_value, elem_size, 89);

    i = 0;
    while (i < 89) {
        cr_assert(eq(i32, array[i], 1970), "array[%u] isn't equal to 1970", i);
        i += 1;
    }
    free(array);
}

Test(arrset, normal_2) {
    char *array;
    char default_value = 'F';
    const unsigned int elem_size = sizeof(char);
    char *tarray = malloc(sizeof(char) * 3);

    tarray[0] = 'F';
    tarray[1] = 'F';
    tarray[2] = '\0';
    array = malloc(elem_size * 3);
    array[2] = '\0';
    arrset(array, &default_value, elem_size, 2);
    cr_assert(eq(str, array, (char *) tarray));
    free(tarray);
    free(array);
}

