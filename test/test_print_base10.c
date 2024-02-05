#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(print_base10, normal_1) {
    cr_assert(eq(print_base10(13072005), 8));
}

Test(print_base10, normal_2) {
    cr_assert(eq(print_base10(-13074), 6));
}

Test(print_base10, empty) {
    cr_assert(eq(print_base10(12324), 5));
}
