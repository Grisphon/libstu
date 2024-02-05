#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_puts, normal_1) {
    cr_assert(eq(stu_puts("007 james"), 10));
}

Test(stu_puts, normal_2) {
    cr_assert(eq(stu_puts("azert"), 6));
}

Test(stu_puts, normal_3) {
    cr_assert(eq(stu_puts("ouistiti"), 9));
}
