#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strdup, normal_1) {
    char *str_a = stu_strdup("feunard");
    str_a[0] = 'l';
    cr_assert(eq(str, str_a, "leunard"));
}
