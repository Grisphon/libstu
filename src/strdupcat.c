/*
 * E89 Pedagogical & Technical Lab
 * project:     2023_iapc_c3
 * created on:  2023-11-02 - 09:37 +0100
 * 1st author:  quentin.mettier - quentin.mettier
 * description: create a new string to cat 2 str in parameter
 */

#include <stdlib.h>

unsigned int stu_strlen(const char *str);

char *strdupcat(char *str1, char *str2)
{
    char *final_str;
    unsigned int size;
    unsigned int count;

    count = 0;
    size = stu_strlen(str1) + stu_strlen(str2) + 1;
    final_str = malloc(sizeof(char) * size);
    if (!final_str)
        return NULL;
    while (count < stu_strlen(str1)) {
        final_str[count] = str1[count];
        count = count + 1;
    }
    while (count < size && count - stu_strlen(str1) < stu_strlen(str2)) {
        final_str[count] = str2[count - stu_strlen(str1)];
        count = count + 1;
    }
    final_str[count] = '\0';
    return final_str;
}
