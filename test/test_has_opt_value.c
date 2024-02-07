#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <stddef.h>
#include "stu.h"


Test(has_opt_value, normal_1) {
    int argc1 = 3;
    char **argv1 = malloc(sizeof(char *) * 3);
    argv1[0] = "a.out";
    argv1[1] = "-d";
    argv1[2] = "fed";
    cr_assert(eq(str, has_opt_value(argc1, argv1, 'd'), "fed"));
    free(argv1);
}

Test(has_opt_value, normal_2) {
    int argc2 = 2;
    char **argv2 = malloc(sizeof(char *) * 2);
    argv2[0] = "a.out";
    argv2[1] = "-d";
    cr_assert(eq(ptr, has_opt_value(argc2, argv2, 'd'), NULL));
    free(argv2);
}

Test(has_opt_value, normal_3) {
    int argc3 = 3;
    char **argv3 = malloc(sizeof(char *) * 3);
    argv3[0] = "a.out";
    argv3[1] = "-d";
    argv3[2] = "-f";
    cr_assert(eq(has_opt_value(argc3, argv3, 'd'), NULL));
    free(argv3);
}
