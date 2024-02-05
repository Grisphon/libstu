#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strchr, normal_1) {
    char *str_a = "peugot";
    char founded = 'g';
    cr_assert(eq(ptr, stu_strchr(str_a, founded), &str_a[3]));
}

Test(stu_strchr, normal_2) {
    char *str = "renault";
    char founded = 'g';
    cr_assert(eq(ptr, stu_strchr(str, founded), NULL));
}
