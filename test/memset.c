#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_memset, with_int) {
    int *array = malloc(sizeof(int) * 3);
    int i;
    array[0] = 5;
    array[1] = 12;
    array[2] = 1;
    stu_memset(array, 0, (sizeof(int) * 3));
    i = 0;
    while (i < 3) {
        cr_assert(eq(i32, array[i], 0));
        i += 1;
    }
    free(array);
}

Test(stu_memset, with_char) {
    char *array = malloc(sizeof(char) * 3);
    char *tarray = malloc(sizeof(char) * 3);
    array[0] = '5';
    array[1] = '1';
    array[2] = '\0';
    tarray[0] = 'i';
    tarray[1] = 'i';
    tarray[2] = '\0';
    cr_assert(eq(str, stu_memset(array, 'i', (sizeof(char) * 2)), tarray));
    free(array);
    free(tarray);
}

