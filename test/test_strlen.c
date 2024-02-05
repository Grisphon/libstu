#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(strlen, normal_1) {
    cr_assert(eq(stu_strlen("hello"), 5));
}

Test(strlen, normal_2) {
    cr_assert(eq(stu_strlen("abcdef"), 6));
}

Test(strlen, empty) {
    cr_assert(eq(stu_strlen(""), 0));
}
