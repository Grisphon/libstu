#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strcpy, normal_1) {
    char *str1 = "josman";
    char *str2 = malloc(sizeof(char) * 7);
    cr_assert(eq(str,stu_strcpy(str2, str1) , "josman"));
    free(str2);
}

Test(stu_strcpy, normal_2) {
    char *str1 = malloc(sizeof(char) * 5);
    char *str2 = "ziak";
    cr_assert(eq(str, stu_strcpy(str1, str2), "ziak"));
    free(str2);
}
