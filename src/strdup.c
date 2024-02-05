#include <unistd.h>
#include <stdlib.h>
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


char *stu_strdup(char *arr)
{
    int count;
    char *str_a;

    count = 0;
    str_a = malloc((stu_strlen(arr) + 1) * sizeof (char));
    if (!str_a)
        return NULL;
    while (arr[count] != '\0') {
        str_a[count] = arr[count];
        count = count + 1;
    }
    str_a[count] = '\0';
    return str_a;
}
