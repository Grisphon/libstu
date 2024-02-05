#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strcmp, 1_larger) {
    char *str1 = "josman";
    char *str2 = "plk";
    cr_assert(eq(i32, stu_strcmp(str1, str2), 1));
}

Test(stu_strcmp, equal) {
    char *str1 = "josman";
    char *str2 = "josman";
    cr_assert(eq(i32, stu_strcmp(str1, str2), 0));
}

Test(stu_strcmp, 2_larger) {
    char *str1 = "plk";
    char *str2 = "josman";
    cr_assert(eq(i32, stu_strcmp(str1, str2), 1));
}

Test(stu_strcmp, not_eq) {
    char *str1 = "josman";
    char *str2 = "josma?";
    cr_assert(eq(i32, stu_strcmp(str1, str2), 1));
}
