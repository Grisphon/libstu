#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_atoi, normal_1) {
    cr_assert(eq(stu_atoi("213terer332"), 213));
}

Test(stu_atoi, normal_2) {
    cr_assert(eq(stu_atoi("-6ezea"), -6));
}

Test(stu_atoi, empty) {
    cr_assert(eq(stu_atoi("feur"), 0));
}
