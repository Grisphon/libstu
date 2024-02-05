#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include "stu.h"


static void redirect_all_std(void)
{
    cr_redirect_stdout();
}

Test(print_base10, normal_1, .init = redirect_all_std) {
    cr_assert(eq(print_base10(13072005), 8));
    cr_assert_stdout_eq_str("13072005\n");
}

Test(print_base10, normal_2, .init = redirect_all_std) {
    cr_assert(eq(print_base10(-13074), 6));
    cr_assert_stdout_eq_str("-13074\n");
}

Test(print_base10, empty, .init = redirect_all_std) {
    cr_assert(eq(print_base10(12324), 5));
    cr_assert_stdout_eq_str("12324\n");
}
