#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_memcpy, normal_1) {
    int *dest = malloc(sizeof(int) * 3);
    int *array = malloc(sizeof(int) * 3);
    array[0] = 2;
    array[1] = 1;
    array[2] = 8;
    cr_assert(eq(str, stu_memcpy(dest, array, 3), (char *) array));
    free(dest);
    free(array);
}
