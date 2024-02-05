#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include "stu.h"

static void redirect_all_std(void)
{
    cr_redirect_stdout();
}

Test(stu_puts, normal_1, .init = redirect_all_std) {
    cr_assert(eq(stu_puts("007 james"), 10));
    cr_assert_stdout_eq_str("007 james\n");
}

Test(stu_puts, normal_2, .init = redirect_all_std) {
    cr_assert(eq(stu_puts("azert"), 6));
    cr_assert_stdout_eq_str("azert\n");
}

Test(stu_puts, normal_3, .init = redirect_all_std) {
    cr_assert(eq(stu_puts("ouistiti"), 9));
    cr_assert_stdout_eq_str("ouistiti\n");
}
