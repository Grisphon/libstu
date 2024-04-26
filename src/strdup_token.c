#include <stddef.h>
#include <stdlib.h>
#include "stu.h"

char *stu_strdup_token(const char *arr, char token)
{
    int count;
    char *str_a;

    count = 0;
    str_a = malloc((stu_strlen_token(arr, token) + 1) * sizeof (char));
    if (!str_a)
        return NULL;
    while (arr[count] != '\0' && arr[count] != token) {
        str_a[count] = arr[count];
        count = count + 1;
    }
    str_a[count] = '\0';
    return str_a;
}
