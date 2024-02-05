#include <stdio.h>

static unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *stu_strcat(char *str1, char *str2)
{
    unsigned int count;
    unsigned int init_size;

    init_size = stu_strlen(str1);
    count = 0;
    while (count < stu_strlen(str2)) {
        str1[count + init_size] = str2[count];
        count += 1;
    }
    str1[count + init_size] = '\0';
    return str1;
}

