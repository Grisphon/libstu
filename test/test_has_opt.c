#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <stddef.h>
#include "stu.h"


Test(has_opt, normal_1) {
    int argc1 = 2;
    char **argv1 = malloc(sizeof(char *) * 2);
    argv1[0] = "a.out";
    argv1[1] = "-d";
    cr_assert(eq(has_opt(argc1, argv1, 'd'), 1));
}

Test(has_opt, normal_2) {
    int argc1 = 1;
    char **argv1 = malloc(sizeof(char *) * 1);
    argv1[0] = "a.out";
    cr_assert(eq(has_opt(argc1, argv1, 'd'), 0));
}

Test(has_opt, normal_3) {
    int argc1 = 2;
    char **argv1 = malloc(sizeof(char *) * 2);
    argv1[0] = "a.out";
    argv1[1] = "-fd";
    argv1[2] = "-azdaz";
    cr_assert(eq(has_opt(argc1, argv1, 'd'), 1));
}
