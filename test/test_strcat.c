#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strcat, normal_1) {
    char *str1 = (char*)malloc(sizeof(char) * 7);
    str1[0] = 'a';
    str1[1] = 'b';
    str1[2] = 'c';
    str1[3] = '\0';
    char *str2 = "def";
    cr_assert(eq(str, stu_strcat(str1, str2), "abcdef"));
}

Test(stu_strcat, normal_2) {
    char *str1 = (char*)malloc(sizeof(char) * 4);
    str1[0] = '\0';
    char *str2 = "def";
    cr_assert(eq(str, stu_strcat(str1, str2), "def"));
}
