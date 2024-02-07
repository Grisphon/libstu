#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_memset, with_int) {
    int *array = malloc(sizeof(int) * 3);
    int *tarray = malloc(sizeof(int) * 3);
    array[0] = 5;
    array[1] = 12;
    array[2] = 1;
    tarray[0] = 0;
    tarray[1] = 0;
    tarray[2] = 0;
    cr_assert(eq(int[3], stu_memset(array, 0, (sizeof(int) * 3)), tarray));
    free(array);
    free(tarray);
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

